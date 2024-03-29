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
    ListNode* deleteMiddle(ListNode* head) {
        if( head ==  NULL || head -> next == NULL){
            return NULL;
        }
        int len =0;
        ListNode* curr = head;
        while( curr != NULL){
            len ++;
            curr = curr -> next;
        }
        int mid = len/2;
        
        int count = 1;
        ListNode*  temp = head;
        
        while(temp != NULL){
            if(count != mid){
                temp = temp -> next;
            }else{
                temp -> next = temp -> next -> next;
            }
            count ++;
        }
        return head;
    }
};