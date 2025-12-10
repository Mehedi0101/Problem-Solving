class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n-1; i++){
            if(nums[i] == 0){
                bool ans = false;
                for(int j=0; j<i; j++){
                    if(i-j < nums[j]){
                        ans = true;
                        break;
                    }
                }
                if(!ans) return false;
            }
        }

        return true;
    }
};