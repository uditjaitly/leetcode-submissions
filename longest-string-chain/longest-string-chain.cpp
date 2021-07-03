bool customComp(string a,string b){
    return a.size()<b.size();
}

class Solution {
public:
    int longestStrChain(vector<string>& words) {
        map<string,int> degree;
        sort(words.begin(),words.end(),customComp);
        int maxm=1;
        for(int i=0;i!=words.size();i++){
            bool found=false;
            int currentLen=1;
            for(int j=0;j!=words[i].size();j++){
                string temp=words[i];
                temp.erase(temp.begin()+j);
                if(degree.find(temp)==degree.end()){
                    
                }
                else{
                    currentLen=degree[temp]+1;
                    if(currentLen>maxm){
                        maxm=currentLen;
                    }
                    
                }
            }
            
            degree.insert(pair<string,int>(words[i],currentLen));
            
            
        }
        return maxm;
    }
};