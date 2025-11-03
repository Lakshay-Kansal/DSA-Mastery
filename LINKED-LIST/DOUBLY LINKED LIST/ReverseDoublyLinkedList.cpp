//   PROBLEM : REVERSE DOUBLY LINKED LIST
//   LINK : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
//   DIFFICULTY : MEDIUM
//   APPROACH : REVERSE THE LINKS BETWEEN NODES 

/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        Node* temp = head;
        Node* nextr = NULL;
        Node* prevr = NULL;
        while(temp != NULL){
            nextr = temp->next ;
            temp->next = prevr;
            prevr=temp;
            temp->prev = nextr;
            temp = nextr;
        }
        return prevr;
    }
};