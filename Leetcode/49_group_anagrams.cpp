class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> mp;

        vector<vector<string>> ans;

        int i = 0;

        for(string str:strs){
            string x = str;
            sort(x.begin(), x.end());
            if(mp.find(x) != mp.end()){
                ans[mp[x]].push_back(str);
            }
            else{
                mp[x] = i;
                i++;
                vector<string> v;
                v.push_back(str);
                ans.push_back(v);
            }
        }

        return ans;
    }
};