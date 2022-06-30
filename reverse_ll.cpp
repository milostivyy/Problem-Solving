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
void reverse_ll(Node** head)
{
    Node* previous=NULL;
    Node* current=*head;
    Node* Next=NULL;
    while(current!=NULL)
    {
        Next=current->next;
        current->next=previous;
        previous=current;
        current=Next;
        
    }
    *head=previous;
}
void print_ll(Node* head)
{
    Node* trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<"->";
        trav=trav->next;
    }
    cout<<"NULL"<<endl;
}
int main()
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
    reverse_ll(&head);
    print_ll(head);
}