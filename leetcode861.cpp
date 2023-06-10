// 861. score after flipping matrix
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1){
                        grid[i][j]=0;
                    }else{
                        grid[i][j]=1;
                    }
                }
            }
        }

        int c1=0;
        int c0=0;
        for(int i=1;i<grid[0].size();i++){
            c1=0;
            c0=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    c1++;
                }else{
                    c0++;
                }
            }
            if(c0>c1){
                for(int j=0;j<grid.size();j++){
                    if(grid[j][i]==0){
                        grid[j][i]=1;
                    }else{
                        grid[j][i]=0;
                    }
                }
            }
        }
        
        
        int sum=0;
        // calculation
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    sum+=pow(2,grid[0].size()-1-j);
                }
            }
        }
        return sum;
    }
};