class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        long long ans = 0, sum = 0, i = 0, j = 0, n = arr.size();
        while(j<n){
            sum += arr[j];
            if(j-i == k-1){
                ans = max(ans,sum);
                sum -= arr[i];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};