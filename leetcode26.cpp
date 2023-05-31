// 26. Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        // nums.clear();
        int i=0;
        for(auto x:ans){
            nums[i]=x;
            count+=1;
            i++;
        }
        return count;
    }
};