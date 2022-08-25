class Solution {
public:
    void pathsStore(int n,vector<vector<int>>& answer,vector<int> paths,int dest,int node,vector<vector<int>>& graph){
        paths.push_back(node);
        for(auto it:graph[node]){
            pathsStore(n,answer,paths,dest,it,graph);
            
            
        }
        if(node==dest){
            answer.push_back(paths);
            
        }
        
        
        
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>answer;
        vector<int>paths;
        int dest=n-1;
        pathsStore(n,answer,paths,dest,0,graph);
        return answer;
        
        
    }
};