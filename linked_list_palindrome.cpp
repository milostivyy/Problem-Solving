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
Node* middle_of_ll(Node** head)
{
    int count=0;
    Node* travel=*head;
    Node* mid=*head;
    while(travel!=NULL)
    {
        if(count&1)
        {
            mid=mid->next;
            
        }
        count++;
        travel=travel->next;
    }
    return mid;
}
void reverse_list(Node** head)
{
    Node* previous=NULL;
    Node* Next=NULL;
    Node* temp=*head;
    while(temp!=NULL)
    {
        Next=temp->next;
        temp->next=previous;
        previous=temp;
        temp=Next;
    }
    *head=previous;
}
bool compare_both(Node*head1,Node*head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1 and temp2)
    {
        if(temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
        else
        {
            return false;
        }
    }
    return true;
}
    
bool is_palindrome(Node* head)
{
    Node* middle=middle_of_ll(&head);
    Node* second_half=middle->next;
    reverse_list(&second_half);
    return compare_both(head,second_half);
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
        cout<<"List is";
        if(is_palindrome(head)) cout<<" palindrome"; 
        else cout<<" not-palindrome"<<endl;
    }
}

/*output
1
5
1 2 3 2 1
1->2->3->2->1->NULL
List is palindrome*/
