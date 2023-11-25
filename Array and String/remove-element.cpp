class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>n;
        for(auto &x: nums) if(x!=val) n.push_back(x);
        return (nums = n).size();
    }
};