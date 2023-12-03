class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        int maxi = -1;
        int maxiN = 0;
        for(auto &x: nums){
            freq[x]++;
            if(freq[x]>maxi){
                maxiN = x;
                maxi = max(freq[x], maxi);
            }
            if(freq[x]>nums.size()/2) break;
        }
        return maxiN;
    }
};