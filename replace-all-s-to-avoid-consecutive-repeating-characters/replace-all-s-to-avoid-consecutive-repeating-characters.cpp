class Solution {
public:
    string modifyString(string s) {
        int i=0;
        if(s.size()==1 && s[0]=='?'){
            return "v";
        }
        while(i!=s.size()){
            if(s[i]=='?'){
                char temp=char('a' + (rand() % 26));
                
                while(i-1==-1 && temp==s[i+1]){
                   temp=char('a' + (rand() % 26));
                }
                while(i+1==s.size() && temp==s[i-1]){
                   temp=char('a' + (rand() % 26));
                }
                while(i-1>=0 && i+1<s.size() && (temp==s[i-1] || temp==s[i+1])){
                    temp=char('a' + (rand() % 26));
                }
                s[i]=temp;
                
            }
            
            
            
            i++;
        }
        return s;
    }
};