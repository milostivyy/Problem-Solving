class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mp) pq.push(it.second);
        int ans=0;
        int minus=0;
        while(!pq.empty()){
            ans++;
            minus+=pq.top();
            pq.pop();
            if(minus>=(n/2)) break;
        }
        return ans;
        
        
        
    }
};