// 258. add digits
class Solution {
public:
    int addDigits(int num) {
        int digits=0;
        while(num>0){
            digits+=num%10;
            num/=10;
        }
        if(digits>10){
            digits=addDigits(digits);
        }
        if(digits==10){
            digits=1;
        }
        return digits;
    }
};