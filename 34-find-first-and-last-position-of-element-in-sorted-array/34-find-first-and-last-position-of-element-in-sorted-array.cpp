class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=find_first(nums,target);
        int second=find_second(nums,target);
        return {first,second};
        
    }
    int find_first(vector<int>& nums,int target)
    {
       int low=0;
       int high=nums.size()-1;
       int fp=-1;
        while(low<=high)
        {
            int middle=(low+high)/2;
            if(nums[middle]==target)
            {
                fp=middle;
                high=middle-1;
            }
            else if(nums[middle]>target)
            {
                high=middle-1;
            }
            else
            {
                low=middle+1;
            }
        }
        return fp;
        
    }
    int find_second(vector<int>& nums,int target)
    {
        int low=0;
       int high=nums.size()-1;
       int sp=-1;
        while(low<=high)
        {
            int middle=(low+high)/2;
            if(nums[middle]==target)
            {
                sp=middle;
                low=middle+1;
            }
            else if(nums[middle]>target)
            {
                high=middle-1;
            }
            else
            {
                low=middle+1;
            }
        }
        return sp;
        
    }
};