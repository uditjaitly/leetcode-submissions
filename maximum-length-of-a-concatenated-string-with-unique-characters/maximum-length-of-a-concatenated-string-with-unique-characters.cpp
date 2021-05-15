class Solution {
public:
    int max=-1;
    
    int maxLength(vector<string>& arr) {
        findUnique(arr,0,"");
        return max;
    }
    void findUnique(vector<string> arr,int idx, string str){
        if(isUnique(str)==false){
            cout<<"rer";
            return;
        }
        int temp= str.size();
   
         if(temp>max){
            max=str.size();
        }
        for(int i=idx;i!=arr.size();i++){
            findUnique(arr, i+1, arr[i]+str);
        }
      
        
        
        
    }
    
    
    
    bool isUnique(string s){
        set<char> track;
        for(int i=0;i!=s.size();i++){
            if(track.find(s[i])!=track.end()){
                return false;
            }
            track.insert(s[i]);
        }
        return true;
    }
};