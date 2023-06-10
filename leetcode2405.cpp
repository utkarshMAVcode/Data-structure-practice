// 2405. Optimal Partition of String
class Solution {
public:
    int partitionString(string s) {
        int count=0;
        int i=0;
        unordered_map<char,bool> mp;
        while(i<s.size()){
            if(mp.find(s[i])!=mp.end()){
                count+=1;
                mp.clear();
            }
            mp[s[i]]=true;
            i++;
        }
        return count+1;
    }
};