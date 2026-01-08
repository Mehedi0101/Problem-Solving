class Solution {
public:
    int mySqrt(int x) {
        int i = 0, ans = 0;
        while(1){
            long long j = i;
            j = j*j;
            if(j <= x) ans = i;
            else{
                break;
            }
            i++;
        }
        return ans;
    }
};