class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> frq1(26), frq2(26);

        for(char c:ransomNote){
            frq1[c-'a']++;
        }

        for(char c:magazine){
            frq2[c-'a']++;
        }

        for(int i=0; i<26; i++){
            if(frq1[i] > frq2[i]) return false;
        }

        return true;
    }
};