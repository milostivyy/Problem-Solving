#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertion_at_beg(Node** head,int item)
{
    Node* new_node=new Node();
    new_node->data=item;
    new_node->next=*head;
    *head=new_node;
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
void insertion_at_givenode(Node* previous_node,int item)
{
    
    Node* new_node=new Node();
    new_node->data=item;
    new_node->next=previous_node->next;
    previous_node->next=new_node;
    
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
            insertion_at_beg(&head,x);
        }
        print(head);
        cout<<endl;
        //for end insertion
        int num;
        cin>>num;
        insertion_at_end(&head,num);
        print(head);
        //for any given Node
        //for example insert node at x place,x is given by the user;
        Node* temp=head;
        cout<<"Please give us the position between 1 and n exclusive?"<<endl;
        int x;
        cin>>x;
        cout<<"OK, the number is "<<x<<endl;
        
        int previous_node_pos=x;
        Node* previous_node=NULL;
        int var=0;
        while(temp!=NULL)
        {
            var++;
            if(var==previous_node_pos)
            {
                previous_node=temp;
                break;
                
            }
            
            temp=temp->next;
        }
        insertion_at_givenode(previous_node,num);
        print(head);
        
        
        
        
        
        
    }
}