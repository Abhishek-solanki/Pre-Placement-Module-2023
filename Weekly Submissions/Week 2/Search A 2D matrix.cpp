class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target, int row) {
        int l = 0;
        int r = matrix[0].size()-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(matrix[row][mid] == target)
                return true;
            else if(matrix[row][mid] > target)
                r = mid-1;
            else
                l = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        while(l < m)
        {
            if(target <= matrix[l][n-1])
                return search(matrix,target,l);
            else
                l++;
        }
        return false;
    }
};