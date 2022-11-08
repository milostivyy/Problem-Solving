class Solution {
public:
    string makeGood(string s) {
        stack<char>sk;
        sk.push(s[0]);
        int n=s.length();
        for(int i=1;i<n;i++){
             if(sk.empty()|| (sk.top()-s[i] != 32 && s[i]-sk.top() != 32)) sk.push(s[i]);
             else sk.pop();
            
        }
        string ans="";
        while(!sk.empty()){
            ans+=(sk.top());
            sk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};