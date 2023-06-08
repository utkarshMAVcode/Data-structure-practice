// 2326. spiral matrix IV
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> mat(m,vector<int>(n));
        vector<int> elem(m*n,-1);
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            elem[count]=(temp->val);
            temp=temp->next;
            count++;
        }
        count=0;
        int sr=0;
        int er=m-1;
        int sc=0;
        int ec=n-1;
        while(count<m*n){
            // first row
            for(int i=sc;count<m*n && i<=ec;i++){
                mat[sr][i]=elem[count];
                count++;
            }
            sr++;

            // last col
            for(int i=sr;count<m*n &&i<=er;i++){
                mat[i][ec]=elem[count];
                count++;
            }
            ec--;

            // last row
            for(int i=ec;count<m*n &&i>=sc;i--){
                mat[er][i]=elem[count];
                count++;
            }
            er--;

            // start col
            for(int i=er;count<m*n &&i>=sr;i--){
                mat[i][sc]=elem[count];
                count++;
            }
            sc++;
        }
        return mat;
    }
};