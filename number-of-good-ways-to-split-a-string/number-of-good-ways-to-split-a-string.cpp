class Solution {
public:
    int numSplits(string s) {
        set<char> s1;
        int res=0;
        set<char> s2;
        vector<int> v1(s.size(),0);
        vector<int> v2(s.size(),0);
        for(int i=0,j=s.size()-1;i!=s.size();i++,j--){
            s1.insert(s[i]);
            s2.insert(s[j]);
            v1[i]=s1.size();
            v2[j]=s2.size();
            
        }
        for(int i=0;i!=v1.size();i++){
            cout<<v1[i]<<"\n"<<v2[i]<<"\n\n";
            if(i+1!=v1.size() && v1[i]==v2[i+1]){
                res++;
            }
        }        
        return res;
        
    }
};