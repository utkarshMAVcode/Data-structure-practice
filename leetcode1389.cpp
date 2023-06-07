// 1389. create target array in the given order
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> r;
        for(int i=0;i<nums.size();i++){
            r.insert(r.begin()+index[i],nums[i]);
        }
        return r;
    }
};