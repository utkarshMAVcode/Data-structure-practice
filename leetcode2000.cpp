// 2000. reverse prefix of word
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int h=word.find(ch);
        int l=0;
        while (l<h){
            swap(word[l],word[h]);
            l++;
            h--;
        }
        return word;
    }
};