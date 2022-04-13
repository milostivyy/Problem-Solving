class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
            return x;
        int i=1;
        while(i*1ll*i<=x)
        {
            i++;
        }
        if(i*1ll*i==x)
        {
            return i;
        }
        return i-1;
        
    
        
    }
};