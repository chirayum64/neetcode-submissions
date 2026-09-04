class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>tr=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        tr[k][j]=0;
                    }
                    for(int l=0;l<n;l++){
                        tr[i][l]=0;
                    }
                }
            }
        }
    matrix=tr;
    }
};
