class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
       int res=INT_MIN;
        int n=special.size();
        sort(special.begin(),special.end());
        res=max(res,(top-special[n-1]));
        res=max(res,(special[0]-bottom));
        for(int i=1;i<n;i++)
        {
            res=max(res,(special[i]-special[i-1]-1));
        }
        return res;
    }
};