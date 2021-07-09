class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minm=INT_MAX;
        if(matrix.size()==1){
            return matrix[0][0];
        }
        for(int i=1;i!=matrix.size();i++){
            matrix[i][0]=min(matrix[i-1][0],matrix[i-1][1]) + matrix[i][0];
            matrix[i][matrix.size()-1]=min(matrix[i-1][matrix.size()-1],matrix[i-1][matrix.size()-2]) + matrix[i][matrix.size()-1];
            minm=min(matrix[i][0],matrix[i][matrix.size()-1]);
            for(int j=1;j!=matrix.size()-1;j++){
                matrix[i][j]=min({matrix[i-1][j], matrix[i-1][j-1], matrix[i-1][j+1]}) + matrix[i][j];
                if(i==matrix.size()-1){
                    if(matrix[i][j]<minm){
                        minm=matrix[i][j];
                    }
                }
            }
        }
        return minm;
    }
};