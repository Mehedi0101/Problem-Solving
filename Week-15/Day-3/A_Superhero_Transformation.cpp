#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};

    if(s.length() != t.length()){
        No;
        return 0;
    }

    for(int i = 0; i < s.length(); i++){
        bool isSVowel = (find(v.begin(), v.end(), s[i]) != v.end());
        bool isTVowel = (find(v.begin(), v.end(), t[i]) != v.end());

        if(isSVowel != isTVowel){
            No;
            return 0;
        }
    }

    Yes;
    return 0;
}