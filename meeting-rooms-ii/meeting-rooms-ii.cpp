class Solution {
public:
    static bool cmp(vector<int>& A, vector<int>& B){
        return A[0]<B[0];
    }
    
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        priority_queue<int, vector<int>, greater<int>> q;
        int maxRooms=0;
        q.push(0);

        for(int i=0;i!=intervals.size();i++){
            if(intervals[i][0]>=q.top()){
                q.pop();
                q.push(intervals[i][1]);
            }
            else{
                q.push(intervals[i][1]);
            }
            cout<<q.top()<<"\n";
        }
        return q.size();
    }
};