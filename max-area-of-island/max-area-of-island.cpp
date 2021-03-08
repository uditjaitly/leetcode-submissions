class Solution {
public:
    int maxm=0;
    int dfs(vector<vector<int>> &grid,int i,int j){
       
        if(i<0 || j>=grid[0].size() || j<0 || i>=grid.size() || grid[i][j]==0){
             cout<<i<<j<<"\n";
            return 0;
        }
      
        grid[i][j]=0;
        return(1+ dfs(grid,i-1,j)+dfs(grid,i+1,j)+dfs(grid,i,j+1)+dfs(grid,i,j-1) );
        
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i!=grid.size();i++){
            for(int j=0;j!=grid[0].size();j++){
                if(grid[i][j]==1){
                    maxm=max(dfs(grid,i,j),maxm);
                }
               
            }
        }
        return maxm;
       
    }
};