class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        stack<int> store;
        vector<int> res;
        for(int i=0;i!=asteroids.size();i++){
            if(asteroids[i]>0){
                store.push(asteroids[i]);
            }
            if(asteroids[i]<0 && store.size()>0 && abs(asteroids[i])>store.top() && store.top()>0){
                while(asteroids[i]<0 && store.size()>0 &&  abs(asteroids[i])>store.top() && store.top()>0){
                    store.pop();
                }
                if(store.size()>0 && store.top()==abs(asteroids[i])){
                    store.pop();
                }
                else if(store.size()==0 ||  store.top()<0){
                    store.push(asteroids[i]);
                }
                
            }
            else if(asteroids[i]<0 && store.size()>0 && abs(asteroids[i])==store.top()){
               
                store.pop();
            }
            else if(asteroids[i]<0 && store.size()==0){
                store.push(asteroids[i]);
            }
            else if(asteroids[i]<0 && store.top()<0){
                store.push(asteroids[i]);
            }
         
            
            
        
            
            
        }
        while(store.size()>0){
            res.push_back(store.top());
            store.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};