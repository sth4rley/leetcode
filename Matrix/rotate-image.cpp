class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> v = matrix;
        for(int j = 0; j<n;++j) // c
            for(int i = n-1; i>=0; --i) // l
                matrix[j][abs(i-n+1)] = v[i][j];
    }
};