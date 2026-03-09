class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, n = s.size(), ans = 0;
        set<char> st;

        for (int j = 0; j < n; j++) {
            st.insert(s[j]);

            if (st.size() == j - i + 1) {
                ans = max(ans, int(st.size()));
            } else {
                while (st.size() != j-i+1) {
                    if (s[i] != s[j]) {
                        st.erase(s[i]);
                    }
                    i++;
                }
            }
            cout << st.size() << endl;
        }

        return ans;
    }
};
