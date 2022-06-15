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
    ListNode* reverse(ListNode * head ){
            ListNode * curr = head;
            ListNode * prev =NULL;
            while(curr!=NULL){
             ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr= next;
            }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * n1 = reverse(l1);
        ListNode *n2 = reverse(l2);
        if(n1 == NULL){
            return l2;
        }
        if(n2 == NULL){
            return l1;
        }
        int t = n1->val + n2->val;
        int carry = t/10;
        int value = t%10;
        n1 = n1->next;
        n2 = n2->next;
        ListNode *ans = new ListNode(value);
        ListNode *trav = ans;
        while(n1!=NULL && n2!=NULL){
            int t = n1->val + n2->val + carry ;
            value = t%10;
            carry = t/10;
            ListNode * temp = new ListNode(value);
            trav->next = temp;
            trav = trav->next;
            n1 = n1->next;
            n2 =n2->next;
        }
        while(n1!=NULL){
            int t = n1->val + carry ;
            value = t%10;
            carry = t/10;
            ListNode * temp = new ListNode(value);
            trav->next = temp;
            trav = trav->next;
             n1 = n1->next;
        }
        while( n2!=NULL){
            int t =  n2->val + carry ;
            value = t%10;
            carry = t/10;
            ListNode * temp = new ListNode(value);
            trav->next = temp;
            trav = trav->next;
            n2 =n2->next;
        }
        while(carry){
            ListNode * temp = new ListNode(carry%10);
            carry /=10;
            trav->next = temp;
            trav = trav->next;

        }
        return reverse(ans);
        
        
    }
};