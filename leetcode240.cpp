// 240. search a 2D matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rind=0;
        int cind=col-1;
        while(rind<row && cind>=0){
            int element=matrix[rind][cind];

            if(element==target){
                return 1;
            }else if(element<target){
                rind++;
            }else{
                cind--;
            }
        }
        return 0;
    }
};