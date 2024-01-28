class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        map<string,vector<string>> mapa;

        for(auto &x : strs) {
            string aux = x;
            sort(aux.begin(), aux.end());
            mapa[aux].push_back(x);
        }

        for(auto it = mapa.begin(); it!=mapa.end(); ++it){
            res.push_back(it->second);
        }

        
        return res;
    }
};