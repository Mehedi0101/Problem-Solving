class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> frq;

        for(int x:nums) frq[x]++;

        pair<int,int> ans = { 0, 0 };

        for(auto it=frq.begin(); it != frq.end(); it++){
            if(it->second > ans.second){
                ans.first = it->first;
                ans.second = it->second;
            }
        }

        return ans.first;
    }
};