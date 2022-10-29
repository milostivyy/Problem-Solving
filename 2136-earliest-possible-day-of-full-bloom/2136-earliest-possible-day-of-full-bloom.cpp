class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        //iska grow time zyada hai usse pehle nipta denge
        int n=growTime.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({growTime[i],plantTime[i]});
        }
        int days=0;
        int answer=0;
        sort(v.begin(), v.end(), greater<vector<int>>());
        for(int i=0;i<n;i++){
            days+=v[i][1];
            answer=max(answer,(days+v[i][0]));
        }
        return answer;
        
    }
};