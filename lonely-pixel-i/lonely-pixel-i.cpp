class Solution {
public:
    bool checkCol(vector<vector<char>>& picture,int col){
        int count=0;
        for(int i=0;i!=picture.size();i++){
            if(picture[i][col]=='B'){
                count++;
            }
        }
        if(count == 1){
            return true;
        }
        return false;
    }
    bool checkRow(vector<vector<char>>& picture,int row){
        int count=0;
        for(int i=0;i!=picture[row].size();i++){
            if(picture[row][i]=='B'){
                count++;
            }
        }
        if(count == 1){
            return true;
        }
        return false;
    }
    
    
    int findLonelyPixel(vector<vector<char>>& picture) {
        int res=0;
        for(int i=0;i!=picture.size();i++){
            for(int j=0;j!=picture[i].size();j++){
                if(picture[i][j]=='B' && (checkCol(picture,j) && checkRow(picture,i))){
                    res++;
                }
            }
        }
        return res;
    }
};