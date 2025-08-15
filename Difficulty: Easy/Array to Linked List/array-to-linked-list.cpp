/*
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        if(arr.empty()) return nullptr;
        
        Node* head=new Node(arr[0]);
        Node* temp=head;
        
        for(size_t i=1;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        return head;
    }
};