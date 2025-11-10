class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(char c:s){
            if((c >= 'a' && c <= 'z') || (c >= '0') && (c <= '9')) str += c;
            else if(c>='A' && c<='Z') str += tolower(c);
        }

        int i=0, j=str.size()-1;

        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};