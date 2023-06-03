// 283. move zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)
        return;
        int second = 0, first = 1;
        while(second<first  &&  first<=nums.size()-1) 
        {
            if(nums[second]==0 && nums[first]!=0)
            {
                swap(nums[second],nums[first]);
                first++;
                second++;
            }
            else if(nums[second]==0 && nums[first]==0)
            {
                first++;
            }
            else{
                first++;
                second++;
            }
        }
    }
};