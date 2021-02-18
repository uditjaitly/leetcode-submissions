class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> track;
        stack<char> tracker;
        string res="";
        for(int i=0;i!=S.size();i++){
            if(S[i]=='(' && track.size()==0){
                track.push(S[i]);
            }
            else if(S[i]==')' && track.size()==1 && tracker.size()==0){
                track.pop();
            }
            else if(S[i]=='('){
                tracker.push(S[i]);
                res+=S[i];
            }
            else{
                tracker.pop();
                res+=S[i];
            }
        }  
        return res;
    }
};