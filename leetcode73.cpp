// 73. set matrix zeros
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int ele=m*n;
        vector<vector<int>> ans;
        ans=matrix;
        for(int i=0;i<ele;i++){
            if(matrix[i/n][i%n]==0){
                for(int j=0;j<m;j++){
                    ans[j][i%n]=0;
                }
                for(int j=0;j<n;j++){
                    ans[i/n][j]=0;
                }
            }
        }
        matrix=ans;
    }
};