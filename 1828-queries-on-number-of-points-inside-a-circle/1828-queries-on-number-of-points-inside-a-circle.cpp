class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v;
        
        for(int i=0;i<queries.size();i++)
        {
            int h=queries[i][0];
            int k=queries[i][1];
            int radius=queries[i][2];
            int cnt=0;
            for(int i=0;i<points.size();i++)
            {
                int x=points[i][0];
                int y=points[i][1];
                double d=sqrt(((x-h)*(x-h))+((y-k)*(y-k)));
                radius=double(radius);
                if(d<=radius)
                {
                    cnt++;
                }
                
            }
            v.push_back(cnt);
            
        }
        return v;
        
    }
};