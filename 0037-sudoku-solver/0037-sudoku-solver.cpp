class Solution {
public:
    
    bool isSafe(vector<vector<char>> &board, int row, int col, int val){
        for(int i=0; i<board.size(); i++){
            if(board[row][i] == val+'0'){
                return false;
            }
            if(board[i][col] == val+'0'){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val+'0'){
                return false;
            }
        }
        return true;
    }
    bool solveSudoku(vector<vector<char>>& board) {
        for(int row=0; row<board.size(); row++){
            for(int col=0; col<board.size(); col++){
                if(board[row][col]=='.'){
                    for(int val=1; val<=9; val++){
                        if(isSafe(board, row, col, val)){
                            board[row][col] = val+'0';
                            bool isPossible = solveSudoku(board);
                            if(isPossible){
                                return true;
                            }
                            else{
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
};