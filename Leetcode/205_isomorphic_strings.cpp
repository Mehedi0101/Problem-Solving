class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<pair<char,char>> st;

        for(int i=0; i<s.size(); i++){
            st.insert({s[i], t[i]});
        }

        bool ans = true;

        int frq1[256], frq2[256];

        for(auto it=st.begin(); it!=st.end(); it++){
            frq1[it->first]++;
            frq2[it->second]++;
        }

        for(int i=0; i<256; i++){
            if(frq1[i] > 1 || frq2[i] > 1){
                ans = false;
                break;
            }
        }

        return ans;
    }
};