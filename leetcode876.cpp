// 876. middle of the linked list
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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        count/=2;
        ListNode* n=head;
        for(int i=0;i<count;i++){
            n=n->next;
        }
        return n;
    }
};