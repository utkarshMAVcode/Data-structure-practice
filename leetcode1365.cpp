// 1365. How Many Numbers Are Smaller Than the Current Number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size();i++){
            int cur=nums[i];
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                else if(nums[i]>nums[j]){
                    count+=1;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};