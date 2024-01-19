class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int prev = -1;

        for(auto &c : s){
            int number;
            if(c == 'I') number = 1;
            if(c == 'V') number = 5;
            if(c == 'X') number = 10;
            if(c == 'L') number = 50;
            if(c == 'C') number = 100;
            if(c == 'D') number = 500;
            if(c == 'M') number = 1000;

            if(prev == -1 or number <= prev) {
                res += number;
            } else {
                res -= prev;
                res += number - prev;
            }

            prev = number;
        }
        return res;
    }
    
};