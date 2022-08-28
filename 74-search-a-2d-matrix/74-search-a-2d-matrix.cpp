class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        /* mat[x][y]-> arr[x*n+y] */
        //index / numberOfCols => which row
        //index numberOfCols => which col
        int low=0,high=(m*n-1);
        while(low<=high)
        {
            int mid=(low+high)>>1;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target)
                return true;
            if(matrix[row][col]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};