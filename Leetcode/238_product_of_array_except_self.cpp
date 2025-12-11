class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long mul = 1;
        int n = nums.size();
        int zeroCount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                mul *= (long long)(nums[i]);
            }
            else{
                zeroCount++;
            }
        }
        vector<int> ans(n,0);
        if(zeroCount == 1){
            for(int i=0; i<n; i++){
                nums[i] == 0 ? ans[i] = mul : ans[i] = 0;
            }
        }
        
        if(zeroCount == 0){
            for(int i=0; i<n; i++){
                ans[i] = mul/nums[i];
            }
        }

        return ans;
    }
};