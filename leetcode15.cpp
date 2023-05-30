// 15. three sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int h=nums.size()-1;
            vector<int> v;
            while(l<h){
                if(nums[i]+nums[l]+nums[h]>0){
                    h--;
                }else if(nums[i]+nums[l]+nums[h]<0){
                    l++;
                }else if(nums[i]+nums[l]+nums[h]==0){
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[h]);
                    ans.insert(v);
                    v.clear();
                    l++;
                    h--;
                    
                }
            }
        }

        // sort(ans.begin(),ans.end());
        vector<vector<int>> ans1;
        for(auto it:ans){
            ans1.push_back(it);
        }
        return ans1;
    }
};