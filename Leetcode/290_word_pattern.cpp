class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        unordered_map<char, string> mp;
        vector<string> words;
        set<string> st;

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {
            if (mp.find(pattern[i]) == mp.end()) {
                mp[pattern[i]] = words[i];
                st.insert(words[i]);
            }
            else{
                if(mp[pattern[i]] != words[i]) return false;
            }
        }

        if(st.size() != mp.size()) return false;
    

        return true;
    }
};