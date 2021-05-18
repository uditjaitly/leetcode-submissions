class Solution {
public:
    bool static sortStarting(vector<int> a, vector<int> b){
        return a[0]<b[0];
    }
    
    
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sortStarting);
        priority_queue<int, vector<int>,greater<int>> pq;
        int maxm=-1;
        vector<int> size;
        for(int i=0;i!=intervals.size();i++){
            if(pq.size()>0 && intervals[i][0]>=pq.top()){
                pq.pop();
            }
            pq.push(intervals[i][1]);
            size.push_back(pq.size());
          
            
            
        }
        
     
        return pq.size();
        
    }
};