// 1314. matrix block sum
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
       int n=mat.size()*mat[0].size();
       vector<vector<int>> ans;
       ans=mat;
       for(int i=0;i<n;i++){
           int a=i/mat[0].size();
           int b=i%mat[0].size();
           int rs=a-k;
           int cs=b-k;
           int re=a+k;
           int ce=b+k;
           if(rs<0){
               rs=0;
           }
           if(cs<0){
               cs=0;
           }
           if(re>=mat.size()){
               re=mat.size()-1;
           }
           if(ce>=mat[0].size()){
               ce=mat[0].size()-1;
           }
           int sum=0;
           for(int j=rs;j<=re;j++){
               for(int k=cs;k<=ce;k++){
                   sum+=mat[j][k];
               }
           }
           ans[a][b]=sum;
       } 
       return ans;
    }
};