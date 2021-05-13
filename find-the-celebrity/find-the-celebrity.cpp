/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        set<int> track;
        for(int i=0;i!=n;i++){
            track.insert(i);
        }
        
        for(int i=0;i!=n;i++){
            if(track.find(i)!=track.end()){
                int count=0;
                int k;
                for(int j=0;j!=n;j++){
                    if(i!=j){
                        if(!knows(i,j) && knows(j,i)){
                            count++;
                        }
                        else if(knows(i,j)){
                            track.erase(i);
                            break;
                        }
                        if(count==n-1){
                            return i;
                        }
                    }
                }
                
                
            }
            
        }
        return -1;
    }
};