bool customComp(vector<double>& a, vector<double>& b){
        return a[0]<b[0];
    }

class Solution {
public:
    
    
    
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.size()==0){
            return 0;
        }
        
        
        vector<vector<double>> ds(position.size(), vector<double> (2,0));
        
        for(int i=0;i!=position.size();i++){
            ds[i][0]=position[i];
            ds[i][1]=double(target-position[i])/speed[i];
        }
        
        sort(ds.begin(),ds.end(),customComp);
        
        int count=0;
        double prevTime=0;
        for(int i=ds.size()-1;i>=0;--i){
            cout<<ds[i][0]<<" "<<ds[i][1]<<"\n";
            if(ds[i][1]>prevTime){
                prevTime=ds[i][1];
                count++;


            }
        }
        return count;
        
    }
};