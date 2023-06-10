// 2500. delete greatest value in each row
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<int> max;
        int ans;
        while(grid[0].size()!=0){
            for(int i=0;i<grid.size();i++){
                int a=*max_element(grid[i].begin(),grid[i].end());
                max.push_back(a);
                grid[i].erase(find(grid[i].begin(),grid[i].end(),a));
            }
            ans+=*max_element(max.begin(),max.end());
            max.clear();
        }
        return ans;
    }
};