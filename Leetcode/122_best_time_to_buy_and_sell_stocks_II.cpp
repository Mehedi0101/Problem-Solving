class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, start = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[start])
                ans += prices[i] - prices[start];
            start++;
        }
        return ans;
    }
};