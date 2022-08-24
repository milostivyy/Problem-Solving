class Solution {
public:
    void checkdfs1(int i,int j,vector<pair<int,int>>& land1,int m,int n,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return;
        grid[i][j]=0;
        land1.push_back({i,j});
        checkdfs1(i+1,j,land1,m,n,grid);
        checkdfs1(i-1,j,land1,m,n,grid);
        checkdfs1(i,j+1,land1,m,n,grid);
        checkdfs1(i,j-1,land1,m,n,grid);
        return;
    }
     void checkdfs2(int i,int j,vector<pair<int,int>>& land2,int m,int n,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return;
        grid[i][j]=0;
        land2.push_back({i,j});
        checkdfs2(i+1,j,land2,m,n,grid);
        checkdfs2(i-1,j,land2,m,n,grid);
        checkdfs2(i,j+1,land2,m,n,grid);
        checkdfs2(i,j-1,land2,m,n,grid);
        return;
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        vector<pair<int,int>>land1;
        vector<pair<int,int>>land2;
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count++;
                    if(count==1){
                        checkdfs1(i,j,land1,m,n,grid);
                    }
                    else if(count==2){
                        checkdfs2(i,j,land2,m,n,grid);
                    }
                }
                
            }
        }
        int mini=INT_MAX;
        int ans=INT_MAX;
        for(int i=0;i<land1.size();i++){
            for(int j=0;j<land2.size();j++){
                ans=min((abs(land1[i].first-land2[j].first)+abs(land1[i].second-land2[j].second))-1,ans);
                if(ans<mini){
                    mini=ans;
                }
            }
        }
        return mini;
        
        
        
    }
};