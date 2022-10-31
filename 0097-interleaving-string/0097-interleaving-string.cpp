// here variable l1 and l2 are changing what happens is that sometimes we dont consider l1 or l2 but l3 is always decreasing by 1.so changing vriables are l1 and l2
class Solution {
    public:
    bool helper(string s1,string s2,string s3,int l1,int l2,int l3,vector<vector<int>>& dp){
        if(l1<0&l2<0&l3<0)return true;
        else if(l1>=0 and l2>=0 and dp[l1][l2]!=-1) return dp[l1][l2];
        else if(l1>=0 and s1[l1]==s3[l3] and l2>=0 and s2[l2]==s3[l3]){
            return dp[l1][l2]= (helper(s1,s2,s3,l1-1,l2,l3-1,dp) || helper(s1,s2,s3,l1,l2-1,l3-1,dp));
        }
        else if(l1>=0 and s1[l1]==s3[l3]){
            return helper(s1,s2,s3,l1-1,l2,l3-1,dp);
        }
        else if(l2>=0 and s2[l2]==s3[l3])
        {
            return helper(s1,s2,s3,l1,l2-1,l3-1,dp);
        }
        else return false;
    }
    public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s3.size()!=s1.size()+s2.size())return false;
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        return helper(s1,s2,s3,s1.length()-1,s2.length()-1,s3.length()-1,dp);
        
        
    }
};