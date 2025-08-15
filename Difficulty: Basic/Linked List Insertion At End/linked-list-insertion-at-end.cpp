/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==nullptr) return new Node(x);
        Node* temp;
        temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        Node* tail=new Node(x);
        temp->next=tail;
        return head;
    }
};