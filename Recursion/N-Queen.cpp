class Solution {

        void solve(vector<string> &board,vector<vector<string>> &ans,int n,int col=0 ){
        // base condition
        if(col == n){
            ans.push_back(board); 
            return;
        }

    for(int row=0; row <n ; row++ ) {
        if ( isSafe( row, col , board , n ) ){
            board[row][col] ='Q';
            solve(board,ans,n, col+1);
            board[row][col] ='.';
        }
    }


    }

     bool isSafe(int row,int col, vector<string> board,int n){
        int r = row;
        int c = col;
        while(c >= 0){// left
            if(board[row][c] == 'Q'){return false;}
            c--;
        }
        // upper left
        c=col;
        while(c>=0 && r>=0){
            if(board[r][c] == 'Q'){return false;} 
            r--;c--;
        }

        c = col; r = row;
        //lower left
        while(r<n && c>=0){
            if(board[r][c] == 'Q'){ return false;} 
            r++;c--;

        }
        return true;
    }

   


public:
    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i =0;i<n;i++){ board[i] = s ;}

    solve(board,ans,n);

    
    return ans;
    }
};
