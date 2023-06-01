// 54. spiral matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col= matrix[0].size();
        int count=0;
        int total = row*col;

        int firstrow=0;
        int firstcol=0;
        int lastrow=row-1;
        int lastcol=col-1;

        vector<int> ans;

        while(count<total){

            //first row
            for(int i=firstcol;count<total && i<=lastcol;i++){
                ans.push_back(matrix[firstrow][i]);
                count++;
            }
            firstrow++;

            //lastcol
            for(int i=firstrow;count<total && i<=lastrow;i++){
                ans.push_back(matrix[i][lastcol]);
                count++;
            }
            lastcol--;

            //lastrow
            for(int i=lastcol;count<total && i>=firstcol;i--){
                ans.push_back(matrix[lastrow][i]);
                count++;
            }
            lastrow--;

            //firstcol
            for(int i=lastrow;count<total && i>=firstrow;i--){
                ans.push_back(matrix[i][firstcol]);
                count++;
            }
            firstcol++;
        }
        return ans;
    }
};