// 2485. find the pivot index
class Solution {
public:
    int pivotInteger(int n) {
        int l=0;
        int h=0;
        for(int i=0;i<=n;i++){
            h+=i;
        }
        int i=0;
        for(int i=0;i<=n;i++){
            l+=i;
            if(l==h){
                return i;
            }
            h-=i;
        }
        return -1;
    }
};