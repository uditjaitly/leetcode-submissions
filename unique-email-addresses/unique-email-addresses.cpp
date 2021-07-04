class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for(int i=0;i!=emails.size();i++){
            string temp="";
            for(int j=0;j!=emails[i].size();j++){
                
                if(emails[i][j]=='+' || emails[i][j]=='@'){
                    int loc=emails[i].find('@');
                    string temp2=emails[i].substr(loc);
                
                    temp+=temp2;
                    cout<<temp;
                    break;
                }
                else if(emails[i][j]!='.' && emails[i][j]!='+'){
                    temp+=emails[i][j];
                    cout<<temp<<"\n";
                }
                
            }
            st.insert(temp);
            
        }
        return st.size();
    }
};