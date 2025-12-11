class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int ans = 0, n = citations.size();
        for(int i=citations[n-1]; i>=0; i--){
            if(i > n){
                continue;
            }

            int x = 0;
            for(int j=0; j<n; j++){
                if(citations[j] >= i) x++;
            }

            if(x>=i){
                ans = i;
                break;
            }
        }

        return ans;
    }
};