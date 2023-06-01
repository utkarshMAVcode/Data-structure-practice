// 69. sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long mid=s+(e-s);
        int temp;
        while(s<=e){
            if(mid*mid<=x){
                temp=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return temp;
    }
};