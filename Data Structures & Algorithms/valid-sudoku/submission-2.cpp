class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            unordered_set<int>s;
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(s.count(board[i][j])!=0){
                    return false;
                }
                s.insert(board[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            unordered_set<int>s;
            for(int j=0;j<m;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(s.count(board[j][i])!=0){
                    return false;
                }
                s.insert(board[j][i]);
            }
        }
     for(int i=0;i<m;i=i+3){
        for(int j=0;j<n;j=j+3){
            unordered_set<int>s;
            for(int k=i;k<i+3;k++){
              for(int l=j;l<j+3;l++){
                if(board[k][l]=='.'){
                    continue;
                }
                if(s.count(board[k][l])!=0){
                    return false;
                }
                s.insert(board[k][l]);
              }
            }
        }
     }
    return true;
    }
};
