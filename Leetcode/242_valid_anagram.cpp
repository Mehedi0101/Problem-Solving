class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1, mp2;

        for(char c:s) mp1[c]++;
        for(char c:t) mp2[c]++;

        for(auto it=mp1.begin(); it!=mp1.end(); it++){
            if(mp2[it->first] != it->second) return false;
        }

        for(auto it=mp2.begin(); it!=mp2.end(); it++){
            if(mp1[it->first] != it->second) return false;
        }

        return true;
    }
};