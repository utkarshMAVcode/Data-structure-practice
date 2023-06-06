// 881. boats to save people
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats=0;
        int l=0;
        int h=people.size()-1;
        sort(people.begin(),people.end());
        while(l<=h){
            if(people[l]+people[h]<=limit){
                boats+=1;
                h--;
                l++;
            }else if(people[l]+people[h]>limit){
                h--;
                boats+=1;
            }

        }
        return boats;
    }
};