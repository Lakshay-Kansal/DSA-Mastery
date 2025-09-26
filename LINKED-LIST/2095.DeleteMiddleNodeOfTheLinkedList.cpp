//   PROBLEM : DELETE THE MIDDLE NODE OF THE LINKED-LIST
//   LINK : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list
//   DIFFICULTY : MEDIUM
//   APPROACH : TORTOISE-HARE ALGORITHM SLOW-POINTER MOVES 1-STEP FAST-POINTER MOVES 2-STEP

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
    if(head == NULL || head->next==NULL)return NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    fast = fast->next->next;
    while(fast != NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    } 
    ListNode *middle = slow->next;
    slow->next = slow->next->next; 
    delete(middle);
    return head  ;
    }
};