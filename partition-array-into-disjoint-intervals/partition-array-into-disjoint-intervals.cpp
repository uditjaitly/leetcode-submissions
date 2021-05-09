class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        vector<int> left;
        vector<int> right;
        int res=1;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i!=A.size();i++){
            if(A[i]>max){
                max=A[i];    
            }
            left.push_back(max);
            cout<<left[i]<<" ";
        }
        for(int i=A.size()-1;i>=0;i--){
            if(A[i]<min){
                min=A[i];
            }
            right.push_back(min);
  
        }
        reverse(right.begin(),right.end());
        
        for(int i=0;i!=left.size()-1;i++){
            cout<<left[i]<<" "<<right[i]<<"\n";
            if(left[i]<=right[i+1]){
                
                res=i+1;
                break;
            }
        }
        return res;
    }
};