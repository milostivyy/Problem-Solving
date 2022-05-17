class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int maxicost=0;
        long long int minicost=0;
        if(cost1>cost2)
        {
            maxicost=cost1;
            minicost=cost2;
        }
        else
        {
            maxicost=cost2;
            minicost=cost1;
        }
        long long int ways=0;
        long long int remain=0;
        for(int i=0;i<=(total/maxicost);i++)
        {
            remain=(total-i*maxicost);
            ways+=(remain/minicost)+1;
        }
        return ways;
        
    }
};