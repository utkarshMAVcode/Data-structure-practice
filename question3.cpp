// Convert Binary Number in a Linked List to Integer
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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp != NULL ){
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        // int dec = 0, i = 0, rem;
        // while (num!=0) {
        //     rem = num % 10;
        //     num /= 10;
        //     dec += rem * pow(2, i);
        //     ++i;
        // }
        // return dec;
        int dec=0;
        int j=0;
        for(int i=v.size()-1;i>=0;i--){
            dec+=v[i]*pow(2,j);
            j++;
        }
        return dec;
    }
};