#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void append_node(Node** head,int item)
{
    Node* new_node=new Node();
    Node* last=* head;
    new_node->data=item;
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
void delete_node(Node** head,int key)
{
    Node* temp=*head;
    Node* previous=NULL;
    if(temp!=NULL and temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
        
    }
    while(temp!=NULL and temp->data!=key)
    {
        previous=temp;
        temp=temp->next;
        
    }
    if(temp==NULL)
    {
        return;
    }
    previous->next=temp->next;
    free(temp);
    
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
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
        Node* head=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            append_node(&head,x);//head ka address jo ** head ke paas hai jo ek node hai 
        }
        print(head);
        cout<<"Which key ?"<<endl;
        int x;
        cin>>x;
        cout<<"Key to be deleted is"<<x<<endl;
        delete_node(&head,x);
        print(head);
    }
}