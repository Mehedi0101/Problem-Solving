class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int minimum = INT_MAX, ans = 0;

        for(int x:prices){
            ans = max(ans,x-minimum);
            minimum = min(minimum,x);
        }

        return ans;
    }
};