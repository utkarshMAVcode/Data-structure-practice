// 2114. maximum number of words found in the sentencces
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mmax=0;
        for(int i =0;i<sentences.size();i++){
            int cs=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    cs+=1;
                }
            }
            if(mmax<cs){
                mmax=cs;
            }
        }
        return mmax;
    }
};