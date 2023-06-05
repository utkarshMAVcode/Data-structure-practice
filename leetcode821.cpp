// 821. shortest distance to a character
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                v.push_back(i);
            }
        }

        vector<int> ans(s.size());
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                ans[i]=0;
            }else{
                int m=INT_MAX;
                for(int j=0;j<v.size();j++){
                    m=min(m,abs(i-v[j]));
                }
                ans[i]=m;
            }
        }
        return ans;
    }
};