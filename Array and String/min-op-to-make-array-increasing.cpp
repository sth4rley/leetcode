class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op = 0;
        int prev = nums[0];

        for(int i = 1; i<nums.size(); ++i){

            if (prev>=nums[i]) {
                op += (prev-nums[i])+1;
                prev = nums[i] += (nums[i-1]-nums[i])+1;
            } else {
                prev = nums[i];
            }
        }

        return op;
    }
};