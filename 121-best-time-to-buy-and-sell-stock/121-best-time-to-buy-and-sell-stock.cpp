class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int min_till_yet=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
          min_till_yet=min(min_till_yet,prices[i]);
            if((prices[i]-min_till_yet)>0)
            {
                diff=max(diff,prices[i]-min_till_yet);
            }
        }
        return diff;
        
    }
};