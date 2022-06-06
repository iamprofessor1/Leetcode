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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         if (head == NULL) {
            return NULL;
        }
        ListNode * curr = head;
        ListNode * prev = NULL;
        left--;
        while(left--){
            prev = curr;
            curr = curr->next;
            right--;
        }
        ListNode* connector = prev , *tail = curr; 
        while(right--){
            ListNode*next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // Connection is important 
        if (connector!= NULL) {
            connector->next = prev;
        } else {
            head = prev;
        }

        tail->next = curr;
        
        return head;
        
        
    }
};