class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>output;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long  newTarget=target-(long long)nums[i]-(long long)nums[j];
                int low=j+1;
                int high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]>newTarget){
                        high--;
                        
                    }
                    else if(nums[low]+nums[high]<newTarget){
                        low++;
                    }
                    else{
                        st.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                        
                    }
                }
            }
        }
        for(auto it:st){
            output.push_back(it);
        }
        return output;
    }
};