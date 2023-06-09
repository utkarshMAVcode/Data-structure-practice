// 2125. number of laser beams in a bank
class Solution {
public:
    bool check(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                return true;
            }
        }
        return false;
    }

    int numberOfBeams(vector<string>& bank) {
        int a=0;
        int b=1;
        int ans;
        while(a<bank.size() && b<bank.size() && a<b){
            int mul=0;
            if(check(bank[a])){
                if(check(bank[b])){
                    mul=count(bank[a].begin(),bank[a].end(),'1')*count(bank[b].begin(),bank[b].end(),'1');
                    a=b;
                    b++;
                }else{
                    b++;
                }
            }else{
                a++;
                b++;
            }
            ans+=mul;
        }
        return ans;
    }
};