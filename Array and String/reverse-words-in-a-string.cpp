class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        stack<string> st;
        string tmp;

        while(ss >> tmp) st.push(tmp);

        string res = "";

        while(st.size()){
            res += st.top(); st.pop();
            if(st.size()) res += " ";
        } 

        return res;
    }
};