class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int row=0;row<matrix.size();row++){
            for(int col=0;col<matrix[0].size();col++){
                if(row>0 and col>0 and matrix[row-1][col-1]!=matrix[row][col]) return false;
                
                
            }
        }return true;
        
        
    }
};