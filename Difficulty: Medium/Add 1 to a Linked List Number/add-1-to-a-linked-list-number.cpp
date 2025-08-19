/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    int addition(Node* head)
    {
        if (head==nullptr) return 1;
        int carry=addition(head->next);
        int sum=head->data+carry;
        head->data=sum%10;
        return sum/10;
    }
    Node* addOne(Node* head) {
        // Your Code here
        int carry=addition(head);
        if(carry!=0)
        {
            Node* newHead = new Node(carry);
            newHead->next = head;
            return newHead;
        }
       return head; // return head of list after adding one
    }
};