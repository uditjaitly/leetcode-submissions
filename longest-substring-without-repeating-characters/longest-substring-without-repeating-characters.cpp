class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0){
            return 0;
        }
        int max=0;
        int maxM=-1;
        set<int> tracker;
        int i=0,j=0;
        while(i<s.size() && j<s.size()){
            if(tracker.find(s[j])==tracker.end()){
                tracker.insert(s[j]);
                j++;
                max=j-i;
                if(max>maxM){
                    maxM=max;
                }
                cout<<max;
                
            }
            else{
                tracker.erase(s[i]);
                i++;
            }
        }
        return maxM;
    }
};