class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1);
        dp[0]=1;
        if(s[0]=='0')return 0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            if(s[i-1]>'0' && s[i-1]<='9')dp[i]=dp[i-1];
            if(s[i-2]=='1')dp[i]+=dp[i-2];
            else if(s[i-2]=='2' && s[i-1]<'7')dp[i]+=dp[i-2];
            if(s[i-1]=='0' && s[i-2]>'2')return 0;
        }
        return dp[n];
    }
};