// 1528. shuffle string
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        ans="";
        vector<char> v(indices.size());
        for(int i=0;i<indices.size();i++){
            v[indices[i]]=s[i];
        }
        for(int i=0;i<indices.size();i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};