/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==nullptr || head->next==nullptr) return head;
        DLLNode* prev=nullptr;
        DLLNode* curr=head;
        while(curr!=nullptr)
        {
            prev=curr->prev;
            curr->prev=curr->next;
            curr->next=prev;
            curr=curr->prev;
        }
        if(prev!=nullptr)
        {
            head=prev->prev;
        }
        return head;
    }
};