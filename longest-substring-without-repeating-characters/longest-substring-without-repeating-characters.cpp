class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> track;
        int max=0;
        int count=0;
        for(int i=0,j=0;i!=s.size(), j!=s.size();){
            if(track.find(s[j])==track.end()){
                track.insert(s[j]);
                  j++;
                count=j-i;
                if(max<count){
                    max=count;
                }
              
            }
            else{
           
                track.erase(s[i]);
           i++;
            }
        }
        return max;
    }
};