class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();
        for (int i = 0; i < n; i++) {
            char curr = strs[0][i];
            bool noMatch = false;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() < i || curr != strs[j][i]) {
                    noMatch = true;
                    break;
                }
            }
            if(noMatch){
                break;
            }
            else{
                ans += curr;
            }
        }

        return ans;
    }
};