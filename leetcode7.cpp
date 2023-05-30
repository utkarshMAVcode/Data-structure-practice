// 7. reverse integer
class Solution {
public:
    int reverse(int x) {
        string  s=to_string(x);
        string res="";
        for(int i=s.size()-1;i>=0;i--){
            res.push_back(s[i]);
        }
        long long int result=stoll(res);
        if(res.back()=='-'){
            result=-result;
        }
        if(result>INT_MAX){
            return 0;
        }
        else if(result<INT_MIN){
            return 0;
        }
        else{
            return result;
        }
    }
};