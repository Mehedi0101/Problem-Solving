class Solution {
public:
    bool isHappy(int n) {
        set<int> st;

        while(1){
            st.insert(n);
            vector<int> digits;

            while(n > 0){
                digits.push_back(n%10);
                n = n/10;
            }

            for(int x:digits) n += (x*x);

            if(n == 1) return true;
            else{
                if(st.find(n) != st.end()) return false;
            }
        }
    }
};