class Solution {
public:
    int max=-1;
    int maxLength(vector<string>& arr) {
        possibleUnique(arr,"",0);
        return max;
    }
    
    void possibleUnique(vector<string>& arr, string str, int idx){
        if(isUnique(str)==false){
            return;
        }
        int temp=str.size();
        if(temp>max){
            max=str.size();
        }
        
        for(int i=idx;i!=arr.size();i++){
            possibleUnique(arr,str+arr[i],i+1);
        }
        
        
        
    }
    
    bool isUnique(string str){
        set<char> track;
        for(int i=0;i!=str.size();i++){
            if(track.find(str[i])!=track.end()){
                return false;
            }
            track.insert(str[i]);
        }
        return true;
    }
};