// 121. best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minv=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(minv>prices[i]){
                minv=prices[i];
            }
            if(profit<prices[i]-minv){
                profit=prices[i]-minv;
            }
        }
        return profit;
    }
};