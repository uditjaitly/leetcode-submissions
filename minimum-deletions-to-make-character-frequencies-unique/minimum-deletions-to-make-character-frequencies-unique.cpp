class Solution {
public:
    int minDeletions(string s) {
        sort(s.begin(),s.end());
        vector<int> count;
        int temp=1;
        set<int> track;
        int res=0;
        for(int i=0;i!=s.size()-1;i++){
            if(s[i+1]==s[i]){
                temp++;
            }
            else{
                count.push_back(temp);
                temp=1;
            }
            if(i==s.size()-2){
                count.push_back(temp);
            }
        }
        sort(count.begin(),count.end(),greater<int>());
        for(int i=0;i!=count.size();i++){
            cout<<count[i]<<" ";
            if(track.find(count[i])==track.end()){
                track.insert(count[i]);
            }
            else{
                
                
                while(track.find(count[i])!=track.end() && count[i]>0){
                    count[i]--;
                    res++;
                }
              
                
                
                track.insert(count[i]);
            }
        }
        return res;
    }
};