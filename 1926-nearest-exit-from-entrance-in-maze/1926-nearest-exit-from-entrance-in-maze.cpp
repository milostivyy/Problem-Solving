class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>>q;
        int dist=1;
        int st=entrance[0],end=entrance[1];
        int m=maze.size();
        int n=maze[0].size();
        int x1[4]={0,-1,0,1};
        int y1[4]={-1,0,1,0};
        q.push({st,end});
        int d=1;
        maze[st][end]='+';
        while(q.size()){
            int size=q.size();
            while(size--){
                pair<int,int>h=q.front();
                q.pop();
                int x=h.first;
                int y=h.second;
                for(int i=0;i<4;i++){
                    int x2=x+x1[i];
                    int y2=y+y1[i];
                    if(x2>=0 and y2>=0 and x2<m and y2<n and maze[x2][y2]=='.'){
                        if(x2==0 || y2==0 || x2==m-1 || y2==n-1){
                            return d;
                        }
                        else
                        {
                            q.push({x2,y2});
                            maze[x2][y2]='+';
                        }
                        
                    }
                    
                    
                    
                }
                
            }
            d++;
        }
        return -1;
        
        
        
        
        
        
    }
};