class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board) {
        
       vector<set<int>> col(9);
       vector<set<int>> sub(9);

        for(int i = 0; i<9; ++i){
            set<int> lin;
            for(int j = 0; j<9; ++j){
                if(board[i][j]=='.') continue;

                if(lin.count(board[i][j])) return false;
                if(col[j].count(board[i][j])) return false;
                if(sub[3*(i/3)+j/3].count(board[i][j])) return false;

                lin.insert(board[i][j]);
                col[j].insert(board[i][j]); 
                sub[3*(i/3)+j/3].insert(board[i][j]);
                
            }
        }

        return true; 
    }
};