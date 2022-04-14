class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int candiesleft[n];
        int candiesright[n];
        for(int i=0;i<n;i++)
        {
            candiesleft[i]=1;
            candiesright[i]=1;
        }
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                candiesleft[i]=candiesleft[i-1]+1;
            }
            
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                candiesright[i]=candiesright[i+1]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=max(candiesleft[i],candiesright[i]);
        }
        return sum;
        
        
        
    }
};