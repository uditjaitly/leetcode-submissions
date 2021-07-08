class Solution {
public:
    int minKnightMoves(int x, int y) {
        queue<pair<int,int>> q;
        q.push(pair<int,int>(0,0));
        int count=0;
        x=abs(x);
        y=abs(y);
        set<pair<int,int>> st;
        while(q.size()!=0){
            int lm=q.size();
            for(int i=0;i!=lm;i++){
                int a=q.front().first;
                int b=q.front().second;
                if(a==x && b==y){
                    return count;
                }
                if(st.find(pair<int,int>(a,b))==st.end() && a>=-2 && b>=-2 && a<=x+2 && b<=y+2){
                    st.insert(pair<int,int>(a,b));
                    q.push(pair<int,int>(a+2,b-1));
                    q.push(pair<int,int>(a+2,b+1));
                    q.push(pair<int,int>(a-2,b-1));
                    q.push(pair<int,int>(a-2,b+1));
                    q.push(pair<int,int>(a+2,b-1));
                    q.push(pair<int,int>(a-1,b-2));
                    q.push(pair<int,int>(a-1,b+2));
                    q.push(pair<int,int>(a+1,b-2));
                    q.push(pair<int,int>(a+1,b+2));
                }
                q.pop();
                
            }
            count++;
        }
        
        return count;
    }
};