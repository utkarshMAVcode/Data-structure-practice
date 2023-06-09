// 2011. final value of variable after performing operations
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]=='X'){
                if(operations[i][1]=='+'){
                    X++;
                }
                else if(operations[i][1]=='-'){
                    X--;
                }
            }
            if(operations[i][2]=='X'){
                if(operations[i][1]=='+'){
                    X++;
                }
                else if(operations[i][1]=='-'){
                    X--;
                }
            }
        }
        return X;
    }
};