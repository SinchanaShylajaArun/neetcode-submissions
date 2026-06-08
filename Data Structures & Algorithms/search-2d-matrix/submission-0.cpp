class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        if(rows==0)return false;
        int columns=matrix[0].size();
        if(columns==0)return false;
        int m=0,n=columns-1;
        while(m<rows && n>=0){

        
                if(matrix[m][n]==target){
                    return true;
                
                }else if(target>matrix[m][n]){
                    m++;
                }else{
                    n--;
                }
               }   return false;
                
            
    }
};
