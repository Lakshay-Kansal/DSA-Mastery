//   PROBLEM : DELETE NODE IN A LINKED LIST
//   LINK : https://leetcode.com/problems/delete-node-in-a-linked-list
//   DIFFICULTY : MEDIUM
//   APPROACH : COPY THE VALUE OF NEXT NODE IN GIVEN NODE AND CHANGE THE NEXT
//              TO ADRESS OF NEXT->NEXT-> NODE (CHECK IF THE NEXT NODE IS LAST OR NOT)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        if(node->next->next == NULL){
            node->next = NULL;
        }else{   
            node->next = node->next->next;
        }
    }
};