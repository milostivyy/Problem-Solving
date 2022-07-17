#include<bits/stdc++.h>
using namespace std;
void printNext(int arr[],int n){
    stack<int>s;
    int res[n];
    for(int i=n-1;i>=0;i--){
        if(!s.empty()){
            while(!s.empty() and s.top()<=arr[i])
            {
                s.pop();
            }
        }
        res[i]=s.empty()?-1:s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        printNext(arr,n);
    }
}