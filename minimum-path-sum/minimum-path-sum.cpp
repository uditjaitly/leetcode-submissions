class Solution {
public:
    int calcPath(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& memo){
        if(i<0 || j<0){
            return 999;
        }
        else if(i==0 && j==0){
            cout<<"here";
            return grid[i][j];
        }
        if(memo[i][j]>=0){
            return memo[i][j];
        }
        grid[i][j]=min(calcPath(grid,i-1,j,memo),calcPath(grid,i,j-1,memo)) + grid[i][j];
       cout<<"i="<<i<<" j="<<j<<" "<<grid[i][j]<<" ";
        memo[i][j]=grid[i][j];
        return grid[i][j];
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> memo(grid.size(), vector<int>(grid[0].size(),-1));
        calcPath(grid,grid.size()-1,grid[0].size()-1,memo);
       
        return grid[grid.size()-1][grid[0].size()-1];
    }
};