#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    int flag=1;
};

void append_at_end(Node** head,int item)
{
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
        new_node->next=NULL;
    }
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
bool detect_loop(Node** head)
{
    Node* temp=*head;
    while(temp!=NULL)
    {
        if(temp->flag==1)
        {
            return true;
        }
        temp->flag=1;
        temp=temp->next;
        
        
    }
    return false;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Node* head=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            append_at_end(&head,x);
        }
        print(head);
        cout<<"Loop is ";
        if(detect_loop(&head)) cout<<"present"; else cout<<"absent"<<endl;
    }
}