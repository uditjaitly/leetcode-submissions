class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        stack<string> store;
        string res="";
        for(int i=0;i!=s.size();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                temp+=s[i];
                cout<<i<<" ";
            }
            if((s[i]==' ' && temp!="") || (i==s.size()-1 && temp!="")){
             
                store.push(temp);
                temp="";
            }
        }
        while(store.size()!=0){
            res+=store.top();
            store.pop();
            if(store.size()>0){
                 res+=' ';      
            }
            
        }
        return res;
    }
};