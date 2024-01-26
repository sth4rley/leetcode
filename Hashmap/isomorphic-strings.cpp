class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char m [128] = {0};
        char n [128] = {0};

        for(int i = 0; i<s.size(); ++i) {

            if(!m[s[i]]) m[s[i]] = t[i];
            else  if (m[s[i]] != t[i] ) return false;
        

            if(!n[t[i]])  n[t[i]] = s[i];
            else if (n[t[i]] != s[i] ) return false;
            
        }

        return true;

    }
};