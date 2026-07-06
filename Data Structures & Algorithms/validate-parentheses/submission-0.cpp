class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack[++top] = c;
            } else {
                if (top == -1) return false;
                if (c == ')' && stack[top] != '(') return false;
                if (c == '}' && stack[top] != '{') return false;
                if (c == ']' && stack[top] != '[') return false;
                top--;
            }
        }
        
        return top == -1;
    }
};
