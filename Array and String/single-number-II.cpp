class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        unordered_set<int>s;

        for(auto &x: nums){
            if (m[x] > 1) {
                s.erase(x);
            } else {
                m[x]++;
                s.insert(x);
            }
        }

        return *s.begin();

    }
};