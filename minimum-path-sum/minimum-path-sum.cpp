class Solution {
public:
    void calcPath(vector<vector<int>>& grid,int i,int j){
        for(int i=0;i!=grid.size();i++){
            for(int j=0;j!=grid[i].size();j++){
                if(i==0 && j==0){
                    j++;
                }
                int top=i-1<0 ? 900 : grid[i-1][j];
                int left=j-1<0 ? 900 : grid[i][j-1];
                grid[i][j]=grid[i][j] + min(top,left);
            }
        }
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid) {
        //vector<vector<int>> memo(grid.size(), vector<int>(grid[0].size(),-1));
        if(grid.size()==1 && grid[0].size()==1){
            return grid[0][0];
        }
        calcPath(grid,grid.size()-1,grid[0].size()-1);
       
        return grid[grid.size()-1][grid[0].size()-1];
    }
};