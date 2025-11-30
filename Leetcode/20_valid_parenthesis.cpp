class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c:s){
            if(c == '(' || c == '{' || c == '[') stk.push(c);
            else{
                if(c == ')' && !stk.empty() && stk.top() == '(') stk.pop();
                else if(c == '}' && !stk.empty() && stk.top() == '{') stk.pop();
                else if(c == ']' && !stk.empty() && stk.top() == '[') stk.pop();
                else return false;
            }
        }

        if(stk.empty()) return true;
        else return false;
    }
};