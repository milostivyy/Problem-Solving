class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        if(image[sr][sc]==color){
            return image;
        }
        int fix=image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int i=it.first;
            int j=it.second;
            image[i][j]=color;
            if(j-1>=0 and image[i][j-1]==fix){
                q.push({i,j-1});
            }
            if(j+1<n and image[i][j+1]==fix){
                q.push({i,j+1});
            }
            if(i-1>=0 and image[i-1][j]==fix){
                q.push({i-1,j});
            }
            if(i+1<m and image[i+1][j]==fix){
                q.push({i+1,j});
            }
        }
        return image;
        
    }
};