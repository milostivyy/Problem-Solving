//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // //Longest substring with K unique characters using Binary Search
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int k;
//         cin>>k;
//         int n=s.length();
//         vector<string>result;
//         for(int i=0;i<n;i++){
//             string dup;
//             for(int j=i;j<n;j++){
//                 dup+=s[j];
//                 result.push_back(dup);
//             }
//             dup.erase();
//         }
//         int maxi=0;
//         for(int i=0;i<result.size();i++){
//             set<char>new_set(result[i].begin(),result[i].end());
//             if(new_set.size()==k){
//                     if((result[i].length())>maxi){
//                         maxi=result[i].length();
//                     }
                
//             }
//         }
//         if(maxi==0){
//             cout<<-1<<endl;
//         }
//         else{
//         cout<<maxi<<endl;
//         }
//     }
// }
//Method -2
        int n=s.length();
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==k){
                maxi=max(maxi,(j-i+1));j++;
            }
            else if (mp.size()<k){
                j++;
            }
            else if(mp.size()>k){
                while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                }
                j++;
            }
        }
        if(maxi==INT_MIN){
            return -1;
        }
        else{
        return maxi;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends