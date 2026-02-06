class Solution
{
public:
    string convert(string s, int numRows)
    {
        int n = s.size();
        if (numRows == 1)
            return s;
        vector<bool> v(n);

        string ans = "";

        int x = numRows * 2 - 2, y = 0;

        for (int i = 0; i < numRows; i++)
        {
            int j = 0;
            while (v[j])
            {
                j++;
            }
            int z = 0;
            while (j < n)
            {
                if (!v[j])
                {
                    ans += s[j];
                    v[j] = true;
                }
                if (z % 2 == 0)
                {
                    j += x;
                }
                else
                {
                    j += y;
                }
                z++;
            }
            x -= 2;
            y += 2;
        }

        return ans;
    }
};