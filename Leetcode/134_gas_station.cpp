class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, ans = -1, n = gas.size();
        while (start < n) {
            int count = 0, x = start, currentGas = gas[start];
            while (count < n) {
                currentGas -= cost[x];
                if (currentGas < 0) {
                    break;
                }

                if (x == n - 1)
                    x = 0;
                else
                    x++;

                currentGas += gas[x];
                count++;
            }

            if (count == n) {
                ans = start;
                break;
            } else {
                if (x < start)
                    break;
                else {
                    start = x+1;
                }
            }
        }
        return ans;
    }
};