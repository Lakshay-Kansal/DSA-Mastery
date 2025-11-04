//   PROBLEM : MERGE TWO SORTED LISTS
//   LINK : https://leetcode.com/problems/merge-two-sorted-lists
//   DIFFICULTY : EASY
//   APPROACH : REARRANGING THE LINKS USING TWO-POINTER AND DUMMY-NODE 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     intval;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){ 
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
      ListNode *i = list1; 
      ListNode *j = list2;
      ListNode *head = new ListNode(-1);
      ListNode *ptr = head;

      while(i!=NULL && j!= NULL){
        if(i->val < j->val){
        ptr->next = i;
        ptr=ptr->next;
        i=i->next;
        }else{
        ptr->next = j;
        ptr=ptr->next;
        j=j->next;
        }
      }
      while(i!=NULL){
        ptr->next = i;
        ptr=ptr->next;
        i=i->next;
      }
      while(j!=NULL){
        ptr->next = j;
        ptr=ptr->next;
        j=j->next;
      }
      return head->next;
    }
};
