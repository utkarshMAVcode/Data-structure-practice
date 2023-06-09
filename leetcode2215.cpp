// 2215. find the difference of two arrays
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans{{},{}};
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());

        for(auto n:s1){
            if(s2.count(n)==0){
                ans[0].push_back(n);
            }
        }
        for(auto n:s2){
            if(s1.count(n)==0){
                ans[1].push_back(n);
            }
        }
        return ans;
    }
};