class Solution {
public:
    bool halvesAreAlike(string s) {
        int vow1=0;
        int vow2=0;
        int n=0;
        if(s.length()%2==0){
            n=s.length()/2-1;
        }
        else
        {
            n=s.length()/2;
        }
        for(int i=0;i<s.length();i++){
            if(i<=n){
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='i'|| s[i]=='I')
                {
                    vow1+=1;
                }
            }
            else
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='i'|| s[i]=='I')
                {
                    vow2+=1;
                }
                
            }
        }
        if(vow1==vow2) return true;
        else return false;
        
    }
};