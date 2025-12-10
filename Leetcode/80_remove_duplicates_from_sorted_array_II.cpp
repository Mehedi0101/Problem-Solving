class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0, curr = INT_MIN, cnt=0, n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] != curr){
                curr = nums[i];
                cnt = 1;
            }
            else{
                cnt++;
                if(cnt > 2){
                    nums[i] = INT_MAX;
                    k++;
                }
            }
        }

        sort(nums.begin(),nums.end());
        return n-k;
    }
};