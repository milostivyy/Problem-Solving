class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>row(n);
        vector<int>column(m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                row[i]=max(row[i],grid[i][j]);
                column[j]=max(column[j],grid[i][j]);
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res+=(min(row[i],column[j])-grid[i][j]);
            }
        }
        return res;
    }
};