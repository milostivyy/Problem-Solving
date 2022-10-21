class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i =0; i<m;i++){
            for(int j =0; j<n;j++){
                if(grid[i][j] != 0){
                    int temp = dfs(grid, i, j, vis);
                    ans = max(ans, temp);
                }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>> &vis){
        if(i<0 || j<0 || i>= grid.size() || j>= grid[0].size() || vis[i][j] == true || grid[i][j] == 0)
            return 0;
        vis[i][j] = true;
        int curr = grid[i][j];
        curr = max({curr, grid[i][j] + dfs(grid, i-1, j, vis),  grid[i][j] + dfs(grid, i+1, j, vis),
                     grid[i][j] + dfs(grid, i, j-1, vis),  grid[i][j] + dfs(grid, i, j+1, vis)});
        vis[i][j] = false;
        return curr;
    }
};