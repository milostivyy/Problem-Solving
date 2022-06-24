#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
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
int middle_of_ll(Node** head)
{
    int count=0;
    Node* temp=*head;
    int mid=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(count&1)
    {
        mid=(count/2)+1;
    }
    else
    {
        mid=(count/2);
    }
    cout<<"The length of ll is "<<count<<endl;
    temp=*head;
    count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==mid) return temp->data;
        temp=temp->next;
    }
    
}
int middle_of_ll2(Node** head)
{
    int count=0;
    Node* temp=*head;
    Node* mid=*head;
    while(temp!=NULL)
    {
        if(count&1)
        {
            mid=mid->next;
        }
        count++;
        temp=temp->next;
    }
    return mid->data;
    
    
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
        cout<<"Middle of ll method 1 "<<middle_of_ll(&head)<<endl;
        print(head);
        cout<<"Method2:";
        cout<<middle_of_ll2(&head)<<endl;
    }
}