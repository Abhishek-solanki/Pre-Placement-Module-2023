class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)
             return {{1}};
        vector<vector<int>>ans(numRows,vector<int>());
        ans[0]={1};
        for(int i=2;i<=numRows;i++)
        {   ans[i-1].push_back(1);
            for(int j=0;j<i-2;j++)
            {
         ans[i-1].push_back(ans[i-2][j]+ans[i-2][j+1]);
            }
          ans[i-1].push_back(1);
        }
        return ans;
        
    }
};