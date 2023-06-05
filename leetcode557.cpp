// 557. reverse words in a string III
class Solution {
public:
    string reverseWords(string &s) {
        string ans;
        vector<string> res;
        int i=0;
        int n=s.size();
        while( i<n){
            string temp;
            while(i<n && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            res.push_back(temp);
            i++;
        }
        for(int i=0;i<res.size();i++){
            ans=ans+res[i]+' ';
        }
        ans.pop_back();
        return ans;


        return ans;
    }
};