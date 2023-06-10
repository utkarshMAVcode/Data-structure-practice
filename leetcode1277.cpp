// 1277. Count square submatrices with all ones
class Solution {
public:
    bool test(vector<vector<int>>& matrix, int sr,int sc, int k){
        for(int i=sr;i<=sr+k;i++){
            for(int j=sc;j<=sc+k;j++){
                if(matrix[i][j]==0){
                    return false;
                }
            }
        }
        return true;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int n=min(matrix.size(),matrix[0].size());
        int m=matrix.size()*matrix[0].size();
        int size=0;
        int ans=0;
        for(int k=0;k<n;k++){
            for(int i=0;i<m;i++){ 
                int a=i/matrix[0].size();
                int b=i%matrix[0].size();
                if((a+k)>=matrix.size() || (b+k)>=matrix[0].size()){
                    continue;
                }
                if(test(matrix,a,b,k)){
                    ans++;
                }
            }
        }
        return ans;
    }
};