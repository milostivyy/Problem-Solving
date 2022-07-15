#include<bits/stdc++.h>
using namespace std;
struct MyStack
{
    stack<int>s;
    int minElement;
    int getMin()
    {
        if(s.size()==0) return -1;
        return minElement;
    }
    int top()
    {
        if(s.size()==0) return -1;
        else
        {
            if(s.top()>=minElement)
            {
                return s.top();
            }
            else if(s.top()<minElement)
            {
                return minElement;
            }
        }
    }
    void push(int x)
    {
        if(s.size()==0){
            s.push(x);
            minElement=x;
        }
        else
        {
            if(x>=minElement)
            {
                s.push(x);
            }
            else if(x<minElement){
                s.push(2*x-minElement);
                minElement=x;
            }
        }
    }
    void pop()
    {
        if(s.size()==0){
            return ;
        }
        else
        {
            if(s.top()>=minElement){
                s.pop();
            }
            else if(s.top()<minElement){
                minElement=2*minElement-s.top();
                s.pop();
            }
        }
    }
    
};
int main()
{
    MyStack s;
	s.push(3);
	s.push(5);
	cout<<s.getMin()<<endl;
	s.push(2);
	s.push(1);
	cout<<s.getMin()<<endl;
	s.pop();
	cout<<s.getMin()<<endl;
	s.pop();
	return 0;
   
        
}
