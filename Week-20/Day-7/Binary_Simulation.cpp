#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int tree[4 * MAXN];
bool lazy[4 * MAXN];
string s;

void build(int node, int l, int r) {
    if (l == r) {
        tree[node] = s[l - 1] - '0';
        lazy[node] = false;
        return;
    }
    int mid = (l + r) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);
    lazy[node] = false;
}

void push(int node, int l, int r) {
    if (lazy[node]) {
        if (l != r) {
            lazy[2 * node] ^= 1;
            lazy[2 * node + 1] ^= 1;
        }
        tree[node] = (r - l + 1) - tree[node];
        lazy[node] = false;
    }
}

void update(int node, int l, int r, int i, int j) {
    push(node, l, r);
    if (r < i || l > j) return;
    if (i <= l && r <= j) {
        lazy[node] ^= 1;
        push(node, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(2 * node, l, mid, i, j);
    update(2 * node + 1, mid + 1, r, i, j);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int l, int r, int pos) {
    push(node, l, r);
    if (l == r) return tree[node];
    int mid = (l + r) / 2;
    if (pos <= mid) return query(2 * node, l, mid, pos);
    else return query(2 * node + 1, mid + 1, r, pos);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        cout << "Case " << tc << ":\n";
        cin >> s;
        int n = s.size();
        build(1, 1, n);
        int q;
        cin >> q;
        while (q--) {
            char type;
            cin >> type;
            if (type == 'I') {
                int i, j;
                cin >> i >> j;
                update(1, 1, n, i, j);
            } else {
                int i;
                cin >> i;
                cout << query(1, 1, n, i) << endl;
            }
        }
    }
    return 0;
}