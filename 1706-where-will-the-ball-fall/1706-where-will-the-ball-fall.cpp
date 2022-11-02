class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>res;
        for(int i=0;i<grid[0].size();i++){
            int x=0;
            int y=i;
            bool flag=true;
            while(x<grid.size())
            {if(grid[x][y]==1){
                if( y+1>=grid[0].size() || grid[x][y+1]!=1){
                    flag=false;
                    break;
                    
                }
                x++;
                y++;
            }
            else if(grid[x][y]==-1){
                if( y-1<0||grid[x][y-1]!=-1 ){
                    flag=false;
                    break;}
                x++;
                y--;
            }
            }
             if(flag) res.push_back(y);
             else res.push_back(-1);
            }
        return res;
        }
};