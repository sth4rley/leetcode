class Solution {
public:
    bool isAnagram(string s, string t) {
        int mapa[26]; memset(mapa, 0, sizeof(mapa));

        for(auto &x: s) mapa[x-'a']++;
        for(auto &x: t){
            mapa[x-'a']--;
            if(mapa[x-'a'] < 0) return false;
        }

        for(int i = 0; i<26; i++) if(mapa[i]!=0) return false;
        return true;

    }
};