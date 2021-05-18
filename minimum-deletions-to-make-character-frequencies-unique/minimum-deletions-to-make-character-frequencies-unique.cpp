class Solution {
public:
    int minDeletions(string s) {
        map<char,int> track;
        priority_queue<int> pq;
        set<int> setTrack;
        int count=0;
        for(int i=0;i!=s.size();i++){
            if(track.find(s[i])==track.end()){
                track.insert(pair<char,int>(s[i],1));
            }
            else{
                track[s[i]]++;
            }
        }    
        for(auto itr=track.begin();itr!=track.end();itr++){
            pq.push(itr->second);
        }
        
        while(pq.size()>0){
            if(setTrack.find(pq.top())==setTrack.end()){
                cout<<pq.top()<<" ";
                setTrack.insert(pq.top());
                pq.pop();
            }
            else if(setTrack.find(pq.top())!=setTrack.end() && pq.top()!=1){
                cout<<pq.top()<<" ";
                int i=0;
                while(setTrack.find(pq.top()-i)!=setTrack.end() && pq.top()-i!=0){
                    cout<<"here";
                    count++;
                    i++;
                }
                setTrack.insert(pq.top()-i);
                pq.pop();
                
            }
            else if(pq.top()==1){
                pq.pop();
                count++;
            }
        }
        
        
        
        
        
        
        
        return count;
    }
};