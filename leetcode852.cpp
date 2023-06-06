// 852. peak index in a mountain
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        int mid=l+(h-l)/2;
        int ans;
        while(l<=h){
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                ans=mid;
                break;
            }else if(arr[mid]>arr[mid+1]){
                h=mid;
            }else if(arr[mid-1]<arr[mid]){
                l=mid;
            }
            mid=l+(h-l)/2;
        }
        return ans;
    }
};