//   PROBLEM : MIDDLE OF A LINKED LIST
//   TIME COMPLEXITY  : O(n)
//   SPACE COMPLEXITY : O(1)

/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next !=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
};