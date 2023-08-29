//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    if(A.length()<B.length()) swap(A,B);
        int m=A.length();
        int n=B.length();
        int i=m-1;
        int j=n-1;
        int carry=0;
        while(j>=0){
            int sum=(A[i]-'0')+(B[j]-'0')+carry;
            A[i]=(sum%2+'0');
            carry=sum/2;
            i--;
            j--;
        }
        while(carry and i>=0){
            int sum=(A[i]-'0')+carry;
            A[i]=(sum%2+'0');
            carry=sum/2;
            i--;

        }
        if(carry) A="1"+A;
        string result;
        for(int i=0;i<A.length();i++){
            if(A[i]=='1'){
                result=A.substr(i,A.length()-i);
                break;
            }
        }
        return result;
        
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends