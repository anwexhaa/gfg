// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        if (*head_ref == nullptr) return;

        Node* temp = *head_ref;
        while (temp != nullptr && temp->data == x) 
        {
            Node* next_node = temp->next;
            delete temp;
            temp = next_node;
        }
        *head_ref = temp;
        while (temp != nullptr) 
        {
            if (temp->data == x) 
            {
                Node* prev_node = temp->prev;
                Node* next_node = temp->next;
                if (prev_node != nullptr)
                    prev_node->next = next_node;
                if (next_node != nullptr)
                    next_node->prev = prev_node;

                delete temp;
                temp = next_node;
            } 
            else 
            {
                temp = temp->next;
            }
        }
    }
};