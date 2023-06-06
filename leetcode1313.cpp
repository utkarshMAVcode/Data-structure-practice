// 1313. decompress run-length encoded list
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int n; 
        n=nums.size();
        n=(n-1)/2;
        for(int i=0;i<=n;i++){
            for(int j=0;j<nums[2*i];j++){
                res.push_back(nums[i*2+1]);
            }
        }
        return res;
    }
};