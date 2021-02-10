class Solution {
public:
    string longestPalindrome(string s) {
    int i=0;
    int x,y;
    string c="";
    if(s.size()==0){
        return "";
    }
   int table[s.size()][s.size()];
   for(int j=0;j!=s.size();j++){
        for(int k=0,i=j;k!=s.size(),i!=s.size();k++,i++){
            if(k==i){
                table[k][i]=1;
                x=k;
                y=i;
            }
            else if(i-k<2 && s[k]==s[i]) {
                table[k][i]=1;   
                x=k;
                y=i;
            }
            else if(i-k>=2 && table[k+1][i-1]==1 && s[k]==s[i]){
                table[k][i]=1;
                x=k;
                y=i;
            }
            else{
                table[k][i]=0;
            }
        }

    }
    for(int i=x;i!=y+1;i++){
        c+=s[i];
    }    
    return c;
    }
};