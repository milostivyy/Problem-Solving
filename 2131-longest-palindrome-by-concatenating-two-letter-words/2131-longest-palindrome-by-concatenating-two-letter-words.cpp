class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        bool flag=false;
        int same_string=0;
        int ans=0;
        for(auto it:mp){
            string s=it.first;
            if(s[0]==s[1]){
                if(mp[s]%2){
                    flag=true;
                    same_string+=(mp[s]-1);
                }
                else
                {
                    same_string+=(mp[s]);
                }
                mp.erase(s);
            }
            else
            {
                string rev=it.first;
                reverse(rev.begin(),rev.end());
                if(mp.find(rev)!=mp.end()){
                    ans=ans+min(mp[rev],mp[s])*4;
                    mp.erase(rev);
                    mp.erase(s);
                }
            }
        }
        if(flag){
            return ans+same_string*2+2;
            
        }
        else
        {
            return ans+same_string*2;
        }
        
    }
};