// 419. battleship in aboard
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int count=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(j==0 && board[i][j]=='X'){
                    count++;
                    for(int k=i+1;k<board.size();k++){
                        if(board[k][j]=='X'){
                            board[k][j]='.';
                        }else{
                            break;
                        }
                    }
                }
                if(j!=0 && board[i][j-1]=='.' && board[i][j]=='X'){
                    count++;
                    for(int k=i+1;k<board.size();k++){
                        if(board[k][j]=='X'){
                            board[k][j]='.';
                        }else{
                            break;
                        }
                    }
                }

            }
        }
        return count;
    }
};