// 9. palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        s=to_string(x);
        bool ans;
        int l=0;
        int h=s.length()-1;
        while(l<=h){
            if(s[l]!=s[h]){
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