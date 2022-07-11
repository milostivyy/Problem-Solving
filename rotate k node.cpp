#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void append_at_last(Node** head,int item){
    Node* new_node=new Node();
    new_node->data=item;
    Node* last=*head;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=new_node;
    }
}
void rotate_from_kthnode(Node** head,int k)
{
    Node* current=*head;
    if(k==0)
    {
        return;
    }
    int cnt=0;
    while(cnt<k and current!=NULL)
    {
        cnt++;
        current=current->next;
    }
    Node* kth_node=current;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=*head;
    *head=kth_node->next;
    kth_node->next=NULL;
}
void print(Node* head)
{
    Node* travel=head;
    while(travel!=NULL)
    {
        cout<<travel->data<<"->";
        travel=travel->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int k;
    cin>>k;
    Node* head=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        append_at_last(&head,x);
    }
    rotate_from_kthnode(&head,k);
    
    print(head);
        
    }
}
