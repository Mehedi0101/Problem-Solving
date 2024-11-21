class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        long long n = arr.size();
        vector<long long> ps(n+1);
        ps[0] = 0;
        for(long long i=0; i<n; i++){
            ps[i+1] = ps[i]+arr[i];
        }
        map<long long, vector<long long>> mp;
        for(long long i=0; i<=n; i++){
            mp[ps[i]].push_back(i);
        }
        
        long long ans = 0;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            long long r = it->first+k;
            auto it1 = mp.find(r);
            if(it1 == mp.end()) continue;
            else{
                long long a = it->second[0];
                long long sz = it1->second.size()-1;
                long long b = it1->second[sz];
                ans = max(ans, b-a);
            }
        }
        return ans;
    }
};