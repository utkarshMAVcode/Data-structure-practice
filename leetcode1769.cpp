// 1769. minimum number of operations to move all balls to each box
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        for(int i=0;i<boxes.size();i++){
            int temp=0;
            for(int j=0;j<boxes.size();j++){
                if(i==j){
                    continue;
                }else if(boxes[j]=='1'){
                    temp+=(abs(i-j));
                }
            }
            answer.push_back(temp);
        }
    return answer;
    }
};