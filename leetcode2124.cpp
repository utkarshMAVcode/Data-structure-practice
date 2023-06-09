// 2124. check if all A's appear before all B's
class Solution {
public:
    bool checkString(string s) {
        bool ans=true;
       for(int i=1;i<s.size();i++){
           if(s[i-1]=='b' && s[i]=='a'){
               ans=false;
               break;
           }
       } 
       return ans;
    }
};