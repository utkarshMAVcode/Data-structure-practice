// number of good pairs
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    n+=1;
                }
            }
        }
        return n;
    }
};