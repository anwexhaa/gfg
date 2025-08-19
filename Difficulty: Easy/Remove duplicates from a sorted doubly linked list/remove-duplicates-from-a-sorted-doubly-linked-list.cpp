/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if(head==nullptr || head->next==nullptr) return head;
        Node* temp=head;
        while(temp!=nullptr && temp->next!=nullptr)
        {
            if(temp->data==temp->next->data)
            {
                Node* dup=temp->next;
                temp->next=dup->next;
                if(dup->next!=nullptr)
                {
                    dup->next->prev=temp;
                }
                delete dup;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};