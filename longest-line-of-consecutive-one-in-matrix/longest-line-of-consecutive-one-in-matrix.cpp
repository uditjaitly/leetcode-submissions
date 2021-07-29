class Solution {
public:
    class ThreeD{
        public:
        int h;
        int v;
        int d;
        int a;
        
    };
    
    
    int longestLine(vector<vector<int>>& mat) {
        vector<vector<ThreeD>> res;
        for(int i=0;i!=mat.size();i++){
            vector<ThreeD> temp;
            for(int j=0;j!=mat[0].size();j++){
                ThreeD obj;
                obj.h=mat[i][j];
                obj.v=mat[i][j];
                obj.d=mat[i][j];
                obj.a=mat[i][j];
                temp.push_back(obj);
                
            }
            res.push_back(temp);
        }
        int maxm=0;
        for(int i=0;i!=mat.size();i++){
            for(int j=0;j!=mat[0].size();j++){
                if(mat[i][j]==1){
                    if(j>0 && mat[i][j-1]==1 ){
                        res[i][j].h=res[i][j].h + res[i][j-1].h;
                       
                    }
                    if(i>0 && mat[i-1][j]==1 ){
                        res[i][j].v=res[i][j].v + res[i-1][j].v;
                    }
                    if(i>0 && j>0 && mat[i-1][j-1]==1 ){
                        res[i][j].d=res[i][j].d + res[i-1][j-1].d;
                    }
                    if(i>0 && j<mat[0].size()-1 && mat[i-1][j+1]==1 ){
                        res[i][j].a=res[i][j].a + res[i-1][j+1].a;
                    }
                  
                    if(maxm<max({res[i][j].h,res[i][j].v,res[i][j].d,res[i][j].a})){
                        maxm=max({res[i][j].h,res[i][j].v,res[i][j].d,res[i][j].a});
                    }
                }
            }
        }
        
        
        return maxm;
    }
};