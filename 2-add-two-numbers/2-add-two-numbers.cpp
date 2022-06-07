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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        int first = l1->val + l2->val;
        ListNode * newhead = new ListNode(first%10);
        ListNode*newhead_connector = newhead; 
        int carry = first/10;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 != NULL && l2 != NULL){
            int value = carry + l1->val + l2->val; 
            ListNode * temp = new ListNode(value%10);
            carry = value/10;
            l1= l1->next;
            l2 = l2->next;
            newhead_connector->next = temp;
            newhead_connector = newhead_connector->next;
        }
        while(l1 != NULL){
            int value = carry + l1->val ; 
            ListNode * temp = new ListNode(value%10);
            carry = value/10;
            l1= l1->next;
            newhead_connector->next = temp;
            newhead_connector = newhead_connector->next;
            // delete(temp);
        }
        while(l2!=NULL){
            int value = carry  + l2->val; 
            ListNode * temp = new ListNode(value%10);
            carry = value/10;
            l2 = l2->next;
            newhead_connector->next = temp;
            newhead_connector = newhead_connector->next;
            // delete(temp);  
        }
        
// *****        handling carry   ******/
        while(carry){
            ListNode * temp = new ListNode(carry%10);
            carry /=10;
            newhead_connector->next = temp;
            newhead_connector = newhead_connector->next;
            
            
        }
        return newhead;
    }
};