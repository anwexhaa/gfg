class Solution {
  public:
    Node *insertAtBegining(Node *head, int x) {
        // Code here
        Node* temp;
        temp=new Node(x);
        temp->next=head;
        head=temp;
        return head;
    }
};