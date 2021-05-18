class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        map<char,int> track;
        if(k==0){
            return 0;
        }
        int i=0,j=0;
        int count=0;
        int max=0;
        while(i!=s.size() && j!=s.size()){
            if(track.find(s[j])==track.end() && track.size()<k){
                track.insert(pair<char,int>(s[j],1));
                j++;
            }
            else if(track.find(s[j])!=track.end()){
                track[s[j]]++;
                j++;
            }
            else{
                track[s[i]]--;
                if(track[s[i]]==0){
                    track.erase(s[i]);
                }
                
                i++;
            }
            count=j-i;
            if(count>max){
                max=count;
            }
            
            
        }
        return max;
        
    }
};