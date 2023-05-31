// 28. find the index of the first occurence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        bool ans=true;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                for(int j=0;j<needle.size();j++){
                    if(haystack[i+j]==needle[j]){
                        ans=true;
                    }else{
                        ans=false;
                        break;
                    }
                }
                if(ans){
                    return i;
                }
            }
        }
        return -1;
    }
};