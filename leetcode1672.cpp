// 1672. richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mmax=0;
        for(int i=0;i<accounts.size();i++){
            int imax=0;
            for(int j=0;j<accounts[i].size();j++){
                imax+=accounts[i][j];
            }
            if(imax>mmax){
                mmax=imax;
            }
        }
    return mmax;
    }
};