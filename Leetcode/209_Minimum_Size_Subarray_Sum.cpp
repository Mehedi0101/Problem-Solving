class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), i=0, j=0, ans = INT_MAX, sum = 0;

        while(i < n && j < n){
            sum += nums[j];

            if(sum >= target){
                ans = min(ans, j-i+1);

                sum -= nums[i];
                sum -= nums[j];
                i++;
                j--;
            }
            j++;
        }

        if(ans == INT_MAX) return 0;
        else return ans;
    }
};
