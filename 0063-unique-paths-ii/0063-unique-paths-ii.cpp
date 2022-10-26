class Solution {
public:
    int unique_paths(int i,int j,vector<vector<int>>& obstacleGrid,int m,int n,vector<vector<int>>& paths){
        if(i>=m || j>=n) return 0;
        if(obstacleGrid[i][j]==1) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(paths[i][j]!=-1) return paths[i][j];
        return paths[i][j]=unique_paths(i+1,j,obstacleGrid,m,n,paths)+unique_paths(i,j+1,obstacleGrid,m,n,paths);
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>paths(m,vector<int>(n+1,-1));
        return unique_paths(0,0,obstacleGrid,m,n,paths);
        
    }
};