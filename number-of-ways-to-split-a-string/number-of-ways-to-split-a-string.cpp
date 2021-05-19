class Solution {
public:
    int numWays(string s) {
        long count=0;
        for(int i=0;i!=s.size();i++){
            if(s[i]=='1'){
                count++;
            }    
        }
        if(count%3!=0){
            return 0;
        }
         int mod = 1000000007;
        if(count==0){
            return (s.size()-1)*(s.size()-2)/2%mod;
        }
        long eachPart=count/3;
        long first=0, second=0;
        long cf=1,cs=1;
        for(int i=0;i!=s.size();i++){
            if(s[i]=='1' && first<eachPart){
                first++;
            }
            else if(s[i]=='0' && first==eachPart){
                cf++;
            }
            else if(s[i]=='1' && first==eachPart){
                first++;
                i--;
            }
            else if(s[i]=='1' && second<eachPart){
                second++;
            }
            else if(s[i]=='0' && second==eachPart){
                cs++;
            }
            else if(s[i]=='1' && second==eachPart){
                second++;
            }
        }
        
       
        return cs*cf%mod;
        
    }
};