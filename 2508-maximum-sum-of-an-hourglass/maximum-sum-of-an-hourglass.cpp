class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
      int ans=0;
      int n=grid.size();
      int m=grid[0].size();
      for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            int sum= grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
            ans=max(ans,sum);
        }
      } 
      return ans ; 
    }
};