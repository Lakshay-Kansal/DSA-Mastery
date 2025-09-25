//   PROBLEM : CHECK IF A LINKED-LIST IS PALINDROME
//   LINK : https://leetcode.com/problems/palindrome-linked-list
//   DIFFICULTY : EASY
//   APPROACH : REVERSE THE SECOND HALF OF THE LINKED-LIST AND COMPARE

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
ListNode* reverseList(ListNode* head) {
    ListNode *temp = head;
    ListNode *prev = NULL;
    while(temp!=NULL){
    ListNode *front = temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
    }   
    return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
    ListNode *slow = head;
    ListNode *fast = head;
    while(fast->next != NULL && fast->next->next !=NULL){
        slow=slow->next;
        fast= fast->next->next;
    }
    ListNode *newHEAD = reverseList(slow->next);
    ListNode *first = head;
    ListNode *second = newHEAD;
    while(second!=NULL){
        if(first->val != second->val){
        reverseList(newHEAD);
        return false;
        }
        first=first->next;
        second = second->next;
        }
        reverseList(newHEAD);
        return true;
    }
};