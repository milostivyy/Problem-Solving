class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
            int n=s.length();
            string res=s;
            s+=s;
            for(int i=0;i<n;i++){
                if(s.substr(i,n)<res){
                    res=s.substr(i,n);
                    
                }
            }
            return res;
            
        }
        else{
        sort(s.begin(),s.end());
            return s;
        
    }
    }
};