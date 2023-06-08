// average salary excluding the minimum and maximum salary
class Solution {
public:
    double average(vector<int>& salary) {
      double ans;
      double count=0;
      sort(salary.begin(),salary.end());
      for(int i=1;i<salary.size()-1;i++){
          ans+=salary[i];
          count++;
      }
      ans=ans/count; 
      return ans; 
    }
};