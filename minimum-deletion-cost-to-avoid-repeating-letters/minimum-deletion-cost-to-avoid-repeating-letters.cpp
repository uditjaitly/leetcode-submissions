class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int res;
        for(int i=0;i!=s.size()-1;i++){
            if(s[i]==s[i+1]){
                if(cost[i]>cost[i+1]){
                    res+=cost[i+1];
                    cost[i+1]=cost[i];
                }
                else{
                    res+=cost[i];
                }
            }
        }
        return res;
    }
};