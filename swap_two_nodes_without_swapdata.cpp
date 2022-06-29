#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void append_node(Node** head,int item)
{
    Node* last=*head;
    Node* new_node=new Node();
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
void print(Node* head)
{
    Node* traverse=head;
    while(traverse!=NULL)
    {
        cout<<traverse->data<<"->";
        traverse=traverse->next;
    }
    cout<<"NULL"<<endl;
}
void swap_ll(Node** head,int x,int y)
{
    Node* prev_x=NULL;
    Node* prev_y=NULL;
    Node* curr_x=*head;
    Node* curr_y=*head;
    if(x==y) return;
    while(curr_x and curr_x->data!=x)
    {
        prev_x=curr_x;
        curr_x=curr_x->next;
    }
    while(curr_y and curr_y->data!=y)
    {
        prev_y=curr_y;
        curr_y=curr_y->next;
    }
    if(curr_x==NULL ||curr_y==NULL)
    {
        return;
    }
    if(prev_x!=NULL)
    {
        prev_x->next=curr_y;
    }
    else
    {
        *head=curr_y;
    }
    if(prev_y!=NULL)
    {
        prev_y->next=curr_x;
    }
    else
    {
        *head=curr_x;
    }
    Node* temp=curr_y->next;
    curr_y->next=curr_x->next;
    curr_x->next=temp;
    
    
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
            append_node(&head,x);
        }
        cout<<"Before swap:";
        print(head);
        swap_ll(&head,3,5);
        cout<<"After swap:";
        print(head);
    }
}