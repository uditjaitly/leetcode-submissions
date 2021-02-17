class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        
        map<int,int> remTrack;
        int sum=0;
        int res=0;
        int remainder;
        for(int i=0;i!=A.size();i++){
            sum = sum + A[i];
            remainder=((sum%K)+K)%K;
            
           
            remTrack[remainder]++;
        }
        for(auto i=remTrack.begin(); i!=remTrack.end(); i++){
            if(i->second>1){
                res=res+((remTrack[i->first]*(remTrack[i->first]-1))/2);
            }
        }
        res=res+remTrack[0];
        return res;
    }
};