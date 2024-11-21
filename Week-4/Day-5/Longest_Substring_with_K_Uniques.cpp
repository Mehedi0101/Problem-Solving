class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        map<char,int> mp;
        int i=0, j=0, ans=-1, n=s.size();
        while(j<n){
            mp[s[j]]++;
            if(mp.size() < k){
                j++;
            }
            else if(mp.size() == k){
                ans = max(ans,j-i+1);
                j++;
            }
            else{
                mp[s[j]]--;
                if(mp[s[j]] == 0) mp.erase(s[j]);
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};