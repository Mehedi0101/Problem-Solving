class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> water(n, 0);

        int p = 0;

        for (int i = 0; i < n; i++)
        {
            if (height[i] < p)
            {
                water[i] = p - height[i];
            }
            else
            {
                p = height[i];
            }
        }

        p = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (height[i] < p)
            {
                water[i] = min(water[i], p - height[i]);
            }
            else
            {
                p = height[i];
                water[i] = 0;
            }
        }

        return accumulate(water.begin(), water.end(), 0);
    }
};