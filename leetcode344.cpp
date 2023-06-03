// 344. reverse string
class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0;
        int high = s.size() - 1;
        while(low < high){
            char temp;
            temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
        }
    }
};