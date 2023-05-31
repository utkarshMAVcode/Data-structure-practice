// 35. search insert position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int s=0;
       int e=nums.size()-1;
       int mid=s+(e-s)/2;
       while(s<=e){
           if(nums[mid]==target){
               return mid;
           }if(nums[mid]>target){
               if(mid==0){
                   return 0;
               }
               if(nums[mid-1]<target){
                   return mid;
               }
               e=mid-1;
           }else{
               if(mid==nums.size()-1){
                   return nums.size();
               }
               s=mid+1;
           }
           mid=s+(e-s)/2;
       }
       return 0; 
    }
};