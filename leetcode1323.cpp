// 1323. maximum 69 number
class Solution {
public:
    int maximum69Number (int num) {
     string Snum = to_string(num);
        for(auto &c: Snum){
            if(c=='6'){
                c='9';
                break;
            }
        }
        return stoi(Snum);
    }
};