class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> p;  int first, second;
        for(string x: tokens){
            if(isOperator(x)){
                first = p.top(); p.pop();
                second = p.top(); p.pop();
                p.push(performOperation(x,second, first));
            } else {
                p.push(atoi(x.c_str()));
            }
        }
        return p.top();
    }

private:
    bool isOperator(string& str){
        if(str == "+" or str == "-" or str == "*" or str == "/") return true;
        return false;
    }

    int performOperation(string& op, int& a, int& b){
        if(op == "+") return a + b;
        else if (op == "-") return a - b;
        else if (op == "*") return a * b;
        return a / b;
    }
};