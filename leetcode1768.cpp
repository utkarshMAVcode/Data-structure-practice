// 1768. merge strings alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n;
        int flag;
        string ans;
        if(word1.size()>word2.size()){
            n=word2.size();
            flag=1;
        }else{
            n=word1.size();
            flag=2;
        }
        for(int i=0;i<n;i++){
            ans=ans+word1[i]+word2[i];
        }
        if(flag==1){
            for(int i=n;i<word1.size();i++){
                ans+=word1[i];
            }
        }else{
            for(int i=n;i<word2.size();i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};