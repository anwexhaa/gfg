/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        if(head==nullptr) return new Node(x);
        Node* tortoise=head;
        Node* hare=head;
        
        while(hare!=nullptr && hare->next!=nullptr && hare->next->next!=nullptr)
        {
            tortoise=tortoise->next;
            hare=hare->next->next;
        }
        Node* newN=new Node(x);
        newN->next=tortoise->next;
        tortoise->next=newN;
        return head;
    }
};