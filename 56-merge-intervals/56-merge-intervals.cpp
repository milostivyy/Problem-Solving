class Solution {
public:
    static bool sortByFst(vector<int> a, vector<int> b)
    {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), sortByFst);
        
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); ++i)
        {
            vector<int> temp = output.back();
            if(intervals[i][0] > temp[1]) 
            {
                output.push_back(intervals[i]);
            }
            else
            {
               int mini = min(intervals[i][0], temp[0]);
               int maxi = max(intervals[i][1], temp[1]);
                output.pop_back();
                output.push_back({mini, maxi});
            }
        }
        return output;
    }
};