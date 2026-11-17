class Solution {
public:
    inline int conv(string ref) {
        stringstream si(ref);
        int val;
        si >> val;
        return val;
    }
    int evalRPN(vector<string>& tokens) {
        if (!tokens.size())
            return 0;
        stack<int> s;
        for (int i{0}; i < tokens.size(); ++i) {
            if (tokens[i] == "+") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b + a);
            } else if (tokens[i] == "-") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b - a);
            } else if (tokens[i] == "*") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b * a);
            } else if (tokens[i] == "/") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b / a);
            } else {
                int val = conv(tokens[i]);
                s.push(val);
            }
        }
        return s.top();
    }
};