class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        vector<int> w1;
        vector<int> w2;
        int min=INT_MAX;
        for(int i=0;i!=wordsDict.size();i++){
            if(wordsDict[i]==word1){
                w1.push_back(i);
            }
            else if(wordsDict[i]==word2){
                w2.push_back(i);
            }
        }
        
        for(int i=0;i!=w1.size();i++){
            for(int j=0;j!=w2.size();j++){
                if(abs(w1[i]-w2[j])<min){
                    min=abs(w1[i]-w2[j]);
                }
            }
        }
        return min;
    }
};