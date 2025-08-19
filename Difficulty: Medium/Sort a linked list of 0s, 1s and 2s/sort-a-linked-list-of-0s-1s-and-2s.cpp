/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head==nullptr || head->next==nullptr) return head;
        Node* temp=head;
        vector<int>ans;
        
        while(temp!=nullptr)
        {
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        Node* linked=new Node(ans[0]);
        Node* curr=linked;
        for(int i=1;i<ans.size();i++)
        {
            curr->next=new Node(ans[i]);
            curr=curr->next;
        }
        return linked;
    }
};