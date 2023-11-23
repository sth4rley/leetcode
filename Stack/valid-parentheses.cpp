class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;
        for(auto x: s){
            if(pilha.empty()){
                pilha.push(x);
            } else {
                if(pilha.top() == '(' and x == ')') pilha.pop();
                else if(pilha.top() == '{' and x == '}') pilha.pop();
                else if(pilha.top() == '[' and x == ']') pilha.pop();
                else pilha.push(x);
            }
        }
        if(pilha.size()) return false;
        return true;
    }
};