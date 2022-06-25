#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
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
    }
    
}
void remove_duplicates(Node** head)
{
    Node* temp1=*head;
    Node* temp2=*head;
    Node* store=NULL;
    while(temp1!=NULL and temp1->next!=NULL)
    {
        temp2=temp1;
        while(temp2->next!=NULL)
        {
            if(temp1->data==temp2->next->data)
            {
                store=temp2->next;
                temp2->next=temp2->next->next;
                free(store);
            }
            else
            {
                temp2=temp2->next;
            }
            
        }
        temp1=temp1->next;
    }
    
    
}
void print_list(Node* head)
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
        Node* head=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            append_at_end(&head,x);
        }
        print_list(head);
        cout<<"after removing duplicates ll look like"<<endl;
        remove_duplicates(&head);
        print_list(head);
    }
}