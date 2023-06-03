// 219. contains duplicate II
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                vector<int> t;
                t=m[nums[i]];
                for(auto it:t)
                cout<<it<<" ";
                cout<<endl;
                for(auto it:t){
                    if(abs(it-i)<=k)
                    return true;
                }
            }
            m[nums[i]].push_back(i);
            //cout<<i<<" "<<nums[i]<<" "<<m[nums[i]]<<endl;
            
        }
        return false;
    }
};