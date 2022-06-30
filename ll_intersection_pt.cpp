#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  Node* next;
  int data;
};
void append_node(Node** head2,int item)
{
    Node* last=*head2;
    Node* new_node=new Node();
    new_node->data=item;
    if(*head2==NULL)
    {
        *head2=new_node;
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
int count_nodes(Node* head)
{
    Node* last1=NULL;
    int count1=0;
    while(last1!=NULL)
    {
        count1++;
        last1=last1->next;
    }
    return count1;
}
int find_intersection(Node* head1,Node* head2)
{
    int diff=abs(count_nodes(head1)-count_nodes(head2));
     Node* temp=NULL;
     Node* temp1=NULL;
    if(count_nodes(head1)>count_nodes(head2))
    {
        temp=head1;
        temp1=head2;
    }
    else
    {
        temp=head2;
        temp1=head1;
    }
    for(int i=0;i<diff;i++)
    {
        if(temp==NULL) return -1;
        temp=temp->next;
        
    }
    while(temp!=NULL and temp1!=NULL)
    {
        if(temp==temp1)
        {
            return temp->data;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return -1;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Node* head1=NULL;
        Node* head2=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            append_node(&head1,x);
            
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            append_node(&head2,x);
            
        }
        head1=NULL;
        head2=NULL;
        cout<<find_intersection(head1,head2);
    }
}
