/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start=NULL;
        ListNode* end=NULL;
        ListNode* current1=l1;
        ListNode* current2=l2;
        int a=0;
        int b=0;
        int carry=0;
        while(current1!=NULL || current2!=NULL)
        {
            if(current1!=NULL)
            {
                 a=current1->val;
            }
            else
            {
                 a=0;
            }
            if(current2!=NULL)
            {
                 b=current2->val;
            }
            else
            {
                 b=0;
            }
            int sum=carry+(a+b);
            carry=(sum>=10)?(sum/10):0;
            sum=sum%10;
            if(start==NULL)
            {
                start=new ListNode(sum);
                end=start;
            }
            else
            {
                end->next=new ListNode(sum);
                end=end->next;
            }
            if(current1!=NULL)
            {
                current1=current1->next;
            }
            if(current2!=NULL)
            {
                current2=current2->next;
            }
        }
        if(carry)
        {
            end->next=new ListNode(carry);
        }
        return start;
        
        
    }
        
        
    
};