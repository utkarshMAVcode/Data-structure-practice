// 1329. sort the matrix diagonally
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> vec;
        for(int i=0;i<mat[0].size();i++){
            int a=0;
            int b=i;
            while(a<mat.size() && b<mat[0].size()){
                vec.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(vec.begin(),vec.end());
            a=0;
            b=i;
            int j=0;
            while(a<mat.size() && b<mat[0].size()){
                mat[a][b]=vec[j];
                a++;b++;j++;
            }
            vec.clear();
        }
        for(int i=1;i<mat.size();i++){
            int a=i;
            int b=0;
            while(a<mat.size() && b<mat[0].size()){
                vec.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(vec.begin(),vec.end());
            a=i;
            b=0;
            int j=0;
            while(a<mat.size() && b<mat[0].size()){
                mat[a][b]=vec[j];
                a++;b++;j++;
            }
            vec.clear();
        }
        return mat;
    }
};