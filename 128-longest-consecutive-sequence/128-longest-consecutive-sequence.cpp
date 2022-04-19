class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longeststreak=1;
        int currentstreak=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]==nums[i-1]+1)
                {
                    currentstreak+=1;
                }
                else
                {
                    longeststreak=max(currentstreak,longeststreak);
                    currentstreak=1;
                }
            }
        }
        return max(longeststreak,currentstreak);
        
    }
};