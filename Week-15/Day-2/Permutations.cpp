class Solution
{
private:
    void generate_permutations(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans,
                               int freq[])
    {
        if (nums.size() == a.size())
        {
            ans.push_back(a);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (freq[i] == 0)
            {
                a.push_back(nums[i]);
                freq[i] = 1;
                generate_permutations(nums, a, ans, freq);
                freq[i] = 0;
                a.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> v;
        int frq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            frq[i] = 0;
        }
        generate_permutations(nums, v, ans, frq);
        return ans;
    }
};