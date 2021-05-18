class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> track;
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(track.size()>0 && s[i]>track.top() ){
                count++; 
                track.pop();
            }
            else{
                track.push(s[i]);
            }
            
        }
        return count;
       
    }
};