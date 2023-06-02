// 136. single number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        if(nums.size()==1){
            return nums[0];
        }else{
            if(nums[0]!=nums[1]){
                return nums[0];
            }
            if(nums[nums.size()-2]!=nums[nums.size()-1]){
                return nums[nums.size()-1];
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
            }else{
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};