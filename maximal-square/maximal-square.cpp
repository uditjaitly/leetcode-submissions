class Solution {
public:
    int maximalSquare(vector<vector<char>>& mm) {
        int n=mm.size();
        int m=mm[0].size();
        vector<vector<int>> matrix(n,vector<int>(m,0));
        for(int i=0;i!=n;i++){
            for(int j=0;j!=m;j++){
                matrix[i][j]=mm[i][j]-'0';
            }
        }
        
        
        
        int maxm=-1;
        cout<<'1'-'0';
        for(int i=0;i!=n;i++){
            for(int j=0;j!=m;j++){
                int top=i-1<0 ? -1 : matrix[i-1][j];
                int diag=(i-1<0 || j-1<0) ? (-2) : matrix[i-1][j-1];
                int left=j-1<0 ? -3 : matrix[i][j-1];
                 cout<<top<<" "<<diag<<" "<<left<<"\n";
                if(matrix[i][j]>=1 && top >= 1 && diag>=1 && left>=1){
                    cout<<"Here";
                   
                    matrix[i][j]=min({top,diag,left})+1;
                    
                }
                if(maxm<=matrix[i][j]){
                    maxm=matrix[i][j];
                }
            }
        }
        return maxm*maxm;
    }
};