class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int res=0;
        for(int i=1;i!=matrix.size();i++){
            for(int j=1;j!=matrix[0].size();j++){
                if(matrix[i][j]>=1){
                    matrix[i][j]=matrix[i][j]+min({matrix[i-1][j],matrix[i-1][j-1],matrix[i][j-1]});
                }
                cout<<matrix[i][j]<<" ";
                res=res+matrix[i][j];
            }
        }
        cout<<res;
        for(int i=0;i!=matrix.size();i++){
            res=res+matrix[i][0];
        }
        cout<<res;
        for(int j=1;j!=matrix[0].size();j++){
            res=res+matrix[0][j];
        }
        return res;
    }
};

