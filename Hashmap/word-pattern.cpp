class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss (s);
        string mapa[26] = {};
        unordered_set<string> conj;
        int i = 0;
        string tmp;

        while(ss >> tmp) {
            if(i==pattern.size()) return false;
            if(mapa[pattern[i]-'a'] == "") {
                mapa[pattern[i]-'a'] = tmp;
                if(conj.count(tmp)) return false;
                conj.insert(tmp);
            }
            else if (mapa[pattern[i]-'a'] != tmp) return false;
            i++;
        }

        if(i!=pattern.size()) return false;
        return true;
    }
};