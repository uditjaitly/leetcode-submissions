class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> count(n,0);
        set<vector<int>> track;
        int max=-1;
        vector<vector<int>> res(n,vector<int> (n,0));
        for(int i=0;i!=roads.size();i++){
            count[roads[i][0]]++;
            count[roads[i][1]]++;
            track.insert(roads[i]);
        }
        for(int i=0;i!=res.size();i++){
            for(int j=0;j!=res[i].size();j++){
                if(i!=j && res[i][j]==0){
                    int temp=0;
                    if(track.find({i,j})!=track.end() || track.find({j,i})!=track.end()){
                        temp=-1;
                    }
                    res[i][j]=count[i] + count[j] + temp;
                    if(res[i][j]>max){
                        max=res[i][j];
                    }
                }
            }
        }
        return max;
        
        
    }
};