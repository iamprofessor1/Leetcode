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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head == NULL || head->next == NULL){
            return head;
        }
        ListNode * temp =head;
        int lenght = 0;
        while(temp!=NULL){
            lenght++;
            temp = temp->next;
        }
        temp = head;
        k = k%lenght;
        if(k==0){
            return head;
        }
        int p = lenght - k;
        p--;
        while(p--){
            temp = temp->next;
        }
        ListNode * temphead = temp->next;
        // return temphead;
        temp->next = NULL;
        temp = temphead;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = head;
        return temphead;
    }
};