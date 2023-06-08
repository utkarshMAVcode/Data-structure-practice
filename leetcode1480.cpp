// 1480. running sum of 1d array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        for(int i =0;i<nums.size();i++){
            int temp=0;
            for(int j=0;j<i+1;j++){
                temp+=nums[j];
            }
            runningSum.push_back(temp);
        }
        return runningSum;
    }
};