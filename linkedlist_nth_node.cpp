#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
};
int  get_nth_node(Node** head,int pos)
{
    int var=0;
    Node* temp=*head;
    while(temp!=NULL)
    {
        temp=temp->next;
        var++;
        if(var==pos)
        {
            return temp->data;
        }
    }
    
    
}
void append_at_end(Node** head,int item)
{
    Node* last=* head;
    Node* new_node=new Node();
    new_node->data=item;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else{
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    
}
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
            append_at_end(&head,x);
        }
        print(head);
        cout<<"Enter position ?"<<endl;
        int pos;
        cin>>pos;
        cout<<"Position is "<<pos<<endl;
        cout<<get_nth_node(&head,pos)<<endl;
    }
}

