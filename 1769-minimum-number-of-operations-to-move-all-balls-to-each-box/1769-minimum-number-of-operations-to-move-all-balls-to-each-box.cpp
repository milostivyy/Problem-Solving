class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>pos;
        vector<int>res;
        int n=boxes.length();
        for(int i=0;i<n;i++)
        {
            if(boxes[i]=='1') pos.push_back(i);
        }
        for(int i=0;i<n;i++)
        {int sum=0;
            for(int j=0;j<pos.size();j++)
            {
                sum+=abs(pos[j]-i);
            }
         res.push_back(sum);
        }
        return res;
        
        
    }
};