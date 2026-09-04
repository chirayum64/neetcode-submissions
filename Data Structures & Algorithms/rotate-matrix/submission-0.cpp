class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>tr=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tr[i][j]=matrix[j][i];
            }
        }
        for(int i=0;i<m;i++){
            reverse(tr[i].begin(),tr[i].end());
        }
    matrix=tr;
    }
};
