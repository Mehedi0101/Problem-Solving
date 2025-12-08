class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(nums[n - (k - i)]);
        }
        for (int i = 0; i < n - k; i++) {
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};