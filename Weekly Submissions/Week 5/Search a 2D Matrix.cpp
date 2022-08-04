class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int l = 0,h = n*m - 1;
        
        while(l<=h)
        {
            int mid = (h - l)/2 + l;
            
            if(target == matrix[mid/m][mid%m])
            {
                return true;
            }
            if(target < matrix[mid/m][mid%m])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1; 
            }
        }
        return false;
    }
};