class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(),v.end(),cmp);
        
        for(int i=0; i<v.size()-1; i++){
            if(v[i].first != v[i+1].first) continue;
            else{
                if(v[i].second - v[i+1].second <= k) return true;
            }
        }

        return false;
    }
};