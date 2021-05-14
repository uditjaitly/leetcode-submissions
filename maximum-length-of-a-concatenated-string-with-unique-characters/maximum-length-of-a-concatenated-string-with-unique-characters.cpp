class Solution {
public:
    int max=0;
    void dfs(int idx,vector<string>& arr,string str){
        if(isUnique(str)==false){
            return;
        }
        if(max<str.size()){
            max=str.size();
        }
        for(int i=idx;i!=arr.size();i++){
            dfs(i,arr,arr[i]+str);
        }
        
        
    }
    bool isUnique(string str){
        set<char> track;
        for(int i=0;i!=str.size();i++){
            if(track.find(str[i])==track.end()){
                track.insert(str[i]);
            }
            else{
                return false;
               
            }
        }
        return true;
    }
    
    int maxLength(vector<string>& arr) {
        dfs(0,arr,"");
        return max;
    }
};