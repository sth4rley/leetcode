class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        unsigned rInd = 1;

        // trata os carrys
        while(digits[digits.size()-rInd] == 9){
            digits[digits.size()-rInd] = 0;
            // novo 0 no inicio (o +1 vai ser somado dps)
            if(digits.size()-rInd == 0) digits.insert (digits.begin(),0);
            rInd++;
        }

        digits[digits.size()-rInd]++;
        
        return digits;
    }
};