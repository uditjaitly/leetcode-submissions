class Solution {
public:
    int count=0;
    void countIslands(vector<vector<char>>& grid,int i, int j){
        if( i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]!='1'){
            
            return;
        }
        cout<<grid[i][j];
        grid[i][j]=0;
        countIslands(grid,i+1,j);
        countIslands(grid,i-1,j);
        countIslands(grid,i,j+1);
       
        countIslands(grid,i,j-1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
       
        
        for(int i=0;i!=grid.size();i++){
            for(int j=0;j!=grid[i].size();j++){
                if(grid[i][j]=='1'){
                    countIslands(grid,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};