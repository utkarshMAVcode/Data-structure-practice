// 2108. find first palindromic string in the array
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int l=0;
            int h=words[i].size()-1;
            string t1 = words[i];
            string t2 = words[i];
            while(l<h){
                swap(t2[l],t2[h]);
                l++;
                h--;
            }
            if(t1==t2){
                return t2;
            }
            // return "hello";
        }
        return "";
    }
};