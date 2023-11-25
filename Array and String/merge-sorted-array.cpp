class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> n3;
        int i = 0;
        int j = 0;

        while (i < m or j < n) {
            if (i < m and (j == n or nums1[i] < nums2[j])) {
                n3.push_back(nums1[i++]);
            } else {
                n3.push_back(nums2[j++]);
            }
        }

        for (int k = 0; k < m + n; k++) nums1[k] = n3[k];
    
    }
};