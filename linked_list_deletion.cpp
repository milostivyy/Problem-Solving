#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void delete_node(Node* to_be_deleted,Node* previous_node)
{
    previous_node->next=to_be_deleted->next;
    free(to_be_deleted);
    
    
}
void insertion_at_end(Node** head,int item)
{
    Node* new_node=new Node();
    new_node->data=item;
    if(head==NULL)
    {
        *head=new_node;
    }
    else
    {
        Node* lastnode=*head;
        while(lastnode->next!=NULL)
        {
            lastnode=lastnode->next;
        }
        lastnode->next=new_node;
        new_node->next=NULL;
        
    }
    
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<"->";
        temp=temp->next;
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
            insertion_at_end(&head,x);
            
        }
        print(head);
        cout<<"Which node want to delete?"<<endl;
        int pos;
        cin>>pos;
        cout<<"Node with position"<<pos<<endl;
        int var=0;
        Node* to_be_deleted=NULL;
        Node* temp=head;
        Node* previous_node=NULL;
        while(temp!=NULL)
        {
            var++;
            if(var==pos)
            {
                to_be_deleted=temp;
                break;
                
            }
            if(var==pos-1)
            {
                previous_node=temp;
            }
            
            temp=temp->next;
        }
        delete_node(to_be_deleted,previous_node);
        print(head);
        
        
        
    }
}




