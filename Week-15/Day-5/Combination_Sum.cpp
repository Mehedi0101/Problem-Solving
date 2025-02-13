class Solution
{
public:
    int t;
    vector<vector<int>> res;

    void f(vector<int> &a, int i, int s, vector<int> v)
    {
        if (i >= a.size())
            return;
        if (s + a[i] == t)
        {
            v.push_back(a[i]);
            res.push_back(v);
            return;
        }
        if (s + a[i] < t)
        {
            vector<int> v1 = v, v2 = v;
            v2.push_back(a[i]);
            f(a, i, s + a[i], v2);
            f(a, i + 1, s, v1);
        }
        else
        {
            f(a, i + 1, s, v);
        }
    }

    vector<vector<int>> combinationSum(vector<int> &a, int target)
    {
        res.clear();
        t = target;
        vector<int> v;
        sort(a.begin(), a.end());
        f(a, 0, 0, v);
        return res;
    }
};