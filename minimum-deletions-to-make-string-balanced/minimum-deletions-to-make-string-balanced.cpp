class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> track;
        int res=0;
        for(int i=s.size()-1;i>=0;i--){
            if(track.size()>0 && track.top()<s[i]){
                track.pop();
                res++;
            }
            else{
                track.push(s[i]);
            }
        }
        return res;
    }
};