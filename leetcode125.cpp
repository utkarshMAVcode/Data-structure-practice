// 121. valid palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' || ispunct(s[i])){
                continue;
            }
            else if(isupper(s[i])){
                s1.push_back(tolower(s[i]));
            }else{
                s1.push_back(s[i]);
        }
        }
        bool ans;
        int l=0;
        int h=s1.size()-1;
        while(l<=h){
            if(s1[l]!=s1[h]){
                ans=false;
                break;
            }else{
                ans=true;
            }
            l++;
            h--;
        }
        return ans;
    }
};