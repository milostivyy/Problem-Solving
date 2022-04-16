class Solution {
    public:
    static bool compare(vector<int>& A,vector<int>& B)
    {
        return A[1]<B[1];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),compare);
        int arrows=1;
        int end=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=end)
            {
                continue;
            }
            else
            {
                end=points[i][1];
                arrows++;
            }
        }
        return arrows;
        
    }
};