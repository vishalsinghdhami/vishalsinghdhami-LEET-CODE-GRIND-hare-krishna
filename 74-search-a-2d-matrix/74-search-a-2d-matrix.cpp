class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int e=r*c-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(matrix[mid/c][mid%c]==target)
                return true;
            else if(matrix[mid/c][mid%c]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return false;
    }
};