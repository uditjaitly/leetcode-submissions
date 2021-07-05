class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string up="";
        string res="";
        for(int i=0;i!=s.size();i++){
            if(s[i]!='-'){
                up+=toupper(s[i]);
            }
        }
        if(up.size()==0){
            return "";
        }
        int numFirst=(up.size()%k)==0 ? k : up.size()%k;
        
        for(int i=0;i!=numFirst;i++){
            res+=up[i];
        }
       
        int counter=0;
        string temp="";
        for(int i=numFirst;i!=up.size();){
            if(counter==k){
                counter=0;
                res+="-";
                res+=temp;
                temp="";
                
            }
            else{
                temp+=up[i];
                counter++;
                i++;
            }
        }
        if(temp.size()>0){
            temp='-'+temp;
        }
        return res+temp;
    }
};