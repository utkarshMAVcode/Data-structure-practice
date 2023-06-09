// 744. find smallest letter greater than target
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]>target) return letters[0];
        for(int i=0;i<letters.size()-1;i++){
            
            if(letters[i]<=target && target<letters[i+1]){
                return letters[i+1];
            }
        }
        return letters[0];
    }
};