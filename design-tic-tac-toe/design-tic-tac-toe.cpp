class TicTacToe {
public:
    vector<vector<int>> board;
    int n;
    /** Initialize your data structure here. */
    TicTacToe(int n) {
        board.assign(n,vector<int>(n,0));
        this->n=n;
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        board[row][col]=player;
        if(checkRow(row, player) || checkCol(col, player) || (row==col && checkDiag(row,player)) || (row==n-col-1 && checkAntiDiag(row,player))){
            return player;
        }
        return 0;
    }
    bool checkRow(int row, int player){
        for(int i=0;i!=board[row].size();i++){
            if(board[row][i]!=player){
                return false;
            }
        }
        return true;
    }
    bool checkCol(int col, int player){
        for(int i=0;i!=board.size();i++){
            if(board[i][col]!=player){
                return false;
            }
        }
        return true;
    }
    bool checkDiag(int row, int player){
        for(int i=0;i!=board.size();i++){
            if(board[i][i]!=player){
                return false;
            }
        }
        return true;
    }
    bool checkAntiDiag(int row, int player){
        for(int i=0;i!=board.size();i++){
            if(board[i][n-i-1]!=player){
                return false;
            }
        }
        return true;
    }
    
    
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */