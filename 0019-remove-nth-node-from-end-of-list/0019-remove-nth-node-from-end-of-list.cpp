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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len =0;
        ListNode* curr = head;
        while( curr != NULL){
            len ++;
            curr = curr -> next;
        }
        if( len == n){
            head = head -> next;
            return head;
        }
        int cnt =1;
        ListNode* temp = head;
        while( temp != NULL){
            if (cnt != (len-n)){
                temp = temp -> next;
            }else{
                temp -> next = temp -> next -> next;
            }
            cnt ++;
        }
        return head;
        
    }
};