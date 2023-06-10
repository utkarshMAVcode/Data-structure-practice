// 2482. difference between ones and zeros in row and column
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> row1,col1,row0,col0;
        for(int i=0;i<grid.size();i++){
            row1.push_back(count(grid[i].begin(),grid[i].end(),1));
            row0.push_back(count(grid[i].begin(),grid[i].end(),0));
        }
        int o=0;
        int z=0;
        for(int i=0;i<grid[0].size();i++){
            o=0;
            z=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==0){
                    z++;
                }else{
                    o++;
                }
            }
            col1.push_back(o);
            col0.push_back(z);
        }

        vector<vector<int>> ans;
        ans=grid;
        int n=grid.size()*grid[0].size();
        int a,b;
        for(int i=0;i<n;i++){
            a=i/grid[0].size();
            b=i%grid[0].size();
            ans[a][b]=row1[a]+col1[b]-row0[a]-col0[b];
        }
        return ans;
    }
};