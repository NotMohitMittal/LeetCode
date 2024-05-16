class Solution {
public:
    bool match(char top, char bracket) {
        if (bracket == ')' && top == '(')
            return true;
        if (bracket == '}' && top == '{')
            return true;
        if (bracket == ']' && top == '[')
            return true;
        return false;
    }

    bool isValid(string s) {
        stack<char> inputStack;
        for (int i = 0; i < s.size(); i++) {
            char bracket = s[i];

            // if opening bracket -> pushToStack
            // if closing bracket -> popFromStack and check the topStack

            if (bracket == '(' || bracket == '{' || bracket == '[') {
                inputStack.push(bracket);
            } else {
                if (!inputStack.empty()) {
                    char top = inputStack.top();
                    if (match(top, bracket)) {
                        inputStack.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (!inputStack.empty()) {
            return false;
        } else {
            return true;
        }
    }
};