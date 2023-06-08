// 1572. matrix diagonal sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            sum+=mat[i][mat.size()-1-i];
            if(i==(mat.size()-1-i)){
                sum-=mat[i][i];
            }
        }
        return sum;
    }
};