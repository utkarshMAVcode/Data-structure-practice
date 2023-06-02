// 128. longest consecutive sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> ans;
        int counter=1;
        int maxi=INT_MIN;

        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        ans.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            if(ans.back()+1==nums[i]){
                counter++;
                ans.push_back(nums[i]);
            }else if(ans.back()+1!=nums[i] && ans.back()!=nums[i]){
                ans.clear();
                ans.push_back(nums[i]);
                maxi=max(maxi,counter);
                counter=1;
            }
            maxi=max(counter,maxi);
        }
        return maxi;
    }
};