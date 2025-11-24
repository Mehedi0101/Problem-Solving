class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        
        long long i=0, j=0, n = nums.size();

        while(i < n && j < n){
            j++;
            if(j == n || nums[j] != nums[j-1]+1){
                if(nums[j-1] == nums[i]) ans.push_back(to_string(nums[i]));
                else{
                    string s = to_string(nums[i])+"->"+to_string(nums[j-1]);
                    ans.push_back(s);
                }
                i = j;
            }
        }

        return ans;
    }
};