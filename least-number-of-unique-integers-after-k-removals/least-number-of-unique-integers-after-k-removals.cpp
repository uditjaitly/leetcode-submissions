class Solution {
public:
    static bool sortInc(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
    
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> freq;
        int fin;
        for(int i=0;i!=arr.size();i++){
            if(freq.find(arr[i])==freq.end()){
                freq.insert(pair<int,int>(arr[i],1));
            }
            else{
                freq[arr[i]]++;
            }
        }
        vector<pair<int,int>> res;
        for(auto itr=freq.begin();itr!=freq.end();itr++){
            res.push_back(pair<int,int>(itr->first,itr->second));
        }
        sort(res.begin(),res.end(),sortInc);
        for(int i=0;i!=res.size();i++){
            if(k>res[i].second){
                k=k-res[i].second;
            }
            else if(k==res[i].second){
                fin=i;
                k=k-res[i].second;
                break;
            }
            else{
                fin=i-1;
                break;
            }

          
        }
        
        return res.size()-fin-1;
        
    }
};