#include<bits/stdc++.h>
using namespace std;

void king(vector<vector<int>>& board, int n, int m){
    bool isBreak = false;
    for(int diagonal_sum = 0; diagonal_sum <= n+m -2; diagonal_sum++){
        for(int i = 0; i<= diagonal_sum; i++){
            int j = diagonal_sum - i;
            if(i < 0 || i >=n || j < 0 || j >= m) continue;
            int c = 0;
            if(i -1 >= 0) c = c || (!board[i-1][j]);
            if(i - 1 >= 0  && j - 1 >= 0) c = c || (!board[i - 1][j-1]);
            if(j - 1 >= 0) c = c || !(board[i][j-1]);
            board[i][j] = c;
        }
        
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            if(board[i][j] == -1) cout<<"- ";
            else cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

void knight(vector<vector<int>>& board, int n, int m){
    bool isBreak = false;
    for(int diagonal_sum = 0; diagonal_sum <= n+m -2; diagonal_sum++){
        for(int i = 0; i<= diagonal_sum; i++){
            int j = diagonal_sum - i;
            if(i < 0 || i >=n || j < 0 || j >= m) continue;
            int c = 0;
            if(i -2 >= 0 && j - 1 >= 0) c = c || (!board[i-2][j - 1]);
            if(i -2 >= 0 && j + 1 < m) c = c || (!board[i-2][j + 1]);
            
            if(i - 1 >= 0 && j - 2 >= 0) c = c || (!board[i-1][j - 2]);
            if(i + 1 < n && j - 2 >= 0) c = c || (!board[i+1][j - 2]);
            board[i][j] = c;
            
            if(i == 3 &&  j == 5 ){
                isBreak = true;
                break;
            }
            
        }
        if(isBreak) break;
        
        
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            if(board[i][j] == -1) cout<<"- ";
            else cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }


    
    cout<<endl;

}




int main(){
    int sx = 5;
    int sy = 3;
    int n =10;
    int m = 10;
    vector<vector<int>> board(n, vector<int>(m, -1));
    board[0][0] = 0;

    king(board, n, m);
    knight(board, n, m);


    
    return 0;
}

// King board

// 0 1 0 1 0 1 0 1 0 1 
// 1 1 1 1 1 1 1 1 1 1 
// 0 1 0 1 0 1 0 1 0 1 
// 1 1 1 1 1 1 1 1 1 1 
// 0 1 0 1 0 1 0 1 0 1 
// 1 1 1 1 1 1 1 1 1 1 
// 0 1 0 1 0 1 0 1 0 1 
// 1 1 1 1 1 1 1 1 1 1 
// 0 1 0 1 0 1 0 1 0 1 
// 1 1 1 1 1 1 1 1 1 1



// Knight board

// 0 0 1 1 0 0 1 1 0 - 
// 0 0 1 1 0 0 1 1 - - 
// 1 1 1 1 1 1 1 - - - 
// 1 1 1 1 1 1 - - - - 
// 0 0 1 1 - - - - - - 
// 0 0 1 - - - - - - - 
// 1 1 - - - - - - - - 
// 1 - - - - - - - - - 
// - - - - - - - - - - 
// - - - - - - - - - - 