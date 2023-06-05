// 485. max consecutive ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int temp=1;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==0){
                        break;
                    }
                    temp++;
                }
                if(count<temp){
                    count=temp;
                }
            }
        }
        return count;
    }
};