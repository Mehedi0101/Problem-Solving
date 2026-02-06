class Solution {
public:
    int jump(vector<int>& nums) {
        int near = 0, far = 0, ans = 0, n = nums.size();

        while (far < n-1) {
            int mx_dis = 0;
            for (int i = near; i <= far; i++) {
                mx_dis = max(mx_dis, i+nums[i]);
            }
            near = far+1;
            far = mx_dis;

            ans++;
        }

        return ans;
    }
};