/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *addNode(Node *head, int pos, int x) {
        // code here
        Node* newNode = new Node(x);
        if (pos == 0) {
            if (head == nullptr) {
                return newNode;
            } else {
                newNode->next = head->next;
                newNode->prev = head;
                if (head->next != nullptr) {
                    head->next->prev = newNode;
                }
                head->next = newNode;
                return head;
            }
        }
        
        Node* temp = head;
        for (int i = 0; i < pos && temp != nullptr; ++i) {
            temp = temp->next;
        }
        
        if (temp == nullptr) {
            return head;
        }
        
        newNode->prev = temp;
        newNode->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        
        return head;
    }
};