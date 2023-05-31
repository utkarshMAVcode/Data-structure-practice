// 27. remove element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ind;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                count+=1;
                ind.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<ind.size();i++){
            nums[i]=ind[i];
        }
        return count;
    }
};