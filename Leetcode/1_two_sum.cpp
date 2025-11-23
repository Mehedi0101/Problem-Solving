class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int x = target-nums[i];
            if( x == nums[i] && mp[x].size() > 1){
                ans.push_back(mp[x][0]);
                ans.push_back(mp[x][1]);
                break;
            }
            if(mp.find(x) != mp.end() && x != nums[i]){
                ans.push_back(i);
                ans.push_back(mp[x][0]);
                break;
            }
        }

        return ans;

    }
};