class Solution {
public:
    string simplifyPath(string path) {
       stringstream ss; ss << path;
       deque<string> s;
       string el;
       while(getline(ss,el,'/')){
           if(el.size()){
               if(el == ".." and s.size()) s.pop_back();
               if(el != ".." and el != ".") s.push_back(el); 
           }
       }
       string res;
       while(s.size()){
        res += "/" + s.front(); s.pop_front();
        }
        return res.empty() ? "/"  : res;
    }
};