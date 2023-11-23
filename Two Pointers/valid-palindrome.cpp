class Solution {
public:
    bool isPalindrome(string s) {

        if(s.size() == 1) return true;

        string str;
        
        for(char &x: s)
            if((toupper(x) >= 'A' and toupper(x) <= 'Z') or (toupper(x) >= '0' and toupper(x) <= '9'))
                str.push_back(toupper(x));
           

        int i = 0;
        int f = str.size()-1;

        while(i<f){
            if(str[i] != str[f]) return false;
            i++;
            f--;
        }

        return true;        

    }
    
};