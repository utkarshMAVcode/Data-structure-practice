// 59. spiral matrix II
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int count=1;

        int firstrow=0;
        int firstcol=0;
        int lastrow=n-1;
        int lastcol=n-1;
        int total = n*n;
        while(count<=total){

            //first row
            for(int i=firstcol;count<=total && i<=lastcol;i++){
                matrix[firstrow][i]=count;
                count++;
            }
            firstrow++;

            //lastcol
            for(int i=firstrow;count<=total && i<=lastrow;i++){
                matrix[i][lastcol]=count;
                count++;
            }
            lastcol--;

            //lastrow
            for(int i=lastcol;count<=total && i>=firstcol;i--){
                matrix[lastrow][i]=count;
                count++;
            }
            lastrow--;

            //firstcol
            for(int i=lastrow;count<=total && i>=firstrow;i--){
                matrix[i][firstcol]=count;
                count++;
            }
            firstcol++;
        }
    return matrix;
    }
};