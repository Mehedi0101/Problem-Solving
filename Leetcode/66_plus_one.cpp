class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, n = digits.size();
        for(int i=n-1; i>=0; i--){
            if(digits[i] == 9){
                carry = 1;
                digits[i] = 0;
            }
            else{
                digits[i]++;
                carry = 0;
                break;
            }
        }
        vector<int> ans;
        if(carry) ans.push_back(1);
        for(int x:digits) ans.push_back(x);

        return ans;
    }
};