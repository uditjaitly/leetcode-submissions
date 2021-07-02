class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalScore=0;
        int currentScore=0;
        int minScore=INT_MAX;
        
        for(int i=0;i!=cardPoints.size();i++){
            totalScore=totalScore+cardPoints[i];
        }
        for(int i=0;i!=cardPoints.size()-k;i++){
            currentScore=currentScore+cardPoints[i];
            
        }
        cout<<totalScore;
        for(int i=1,j=cardPoints.size()-k;j!=cardPoints.size();i++,j++){
            if(currentScore<minScore){
                minScore=currentScore;
            }
            
            currentScore=currentScore-cardPoints[i-1]+cardPoints[j];
            
        }
        if(currentScore<minScore){
                minScore=currentScore;
            }
        return totalScore-minScore;
    }
};