/*Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.*/
class Solution {
public:
    int numTrees(int n) {
        int arr[n+1];
        arr[0]=arr[1]=1;
        for(int i=2;i<=n;i++)
        {
            arr[i]=0;
            for(int k=1;k<=i;k++)
            {
                arr[i]+=arr[k-1]*arr[i-k];
                
            }
        }
        return arr[n];
    }
};