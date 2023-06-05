// 807. max increase to keep city skyline
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row(grid.size());
        vector<int> col(grid.size());
        int max=0;
        for(int i=0;i<grid.size();i++){
            int r=0;
            int c=0;
            for(int j=0;j<grid.size();j++){
                if(c<=grid[i][j]){
                    c=grid[i][j];
                    col[i]=c;
                }
                if(r<=grid[j][i]){
                    r=grid[j][i];
                    row[i]=r;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                int d=min(row[i],col[j]);
                max=max+(d-grid[i][j]);
                // max=max+(d-grid[j][i]);
            }
        }
        return max;
    }
};