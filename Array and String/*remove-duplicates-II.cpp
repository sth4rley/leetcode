class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        int j = 0; 
        int k = 2;

        while (j < nums.size()) {

            if (j == 0 || nums[j - 1] != nums[j]) k = 2;
            else k--;
            
            if (k > 0) nums[i++] = nums[j];
    
            j++;

        }

        return i;
    }
};