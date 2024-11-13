class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int consecutive =1;
        int maxi=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
            if(nums[i]==nums[i-1]+1){
                consecutive++;
            }
            else{
                maxi=max(consecutive,maxi);
                consecutive=1;
            }
            }
        }
        return max(maxi,consecutive);
        
    }
};