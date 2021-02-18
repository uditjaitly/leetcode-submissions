class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy=strs;
        vector<vector<string>> res;
        map<string,vector<int>> store;
        for(int i=0;i!=strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
            cout<<strs[i]<<" ";
            store[strs[i]].push_back(i);
            
        }
        for(auto i=store.begin();i!=store.end();i++){
            vector<string> temp;
            for(int j=i->second.size()-1;j>=0;j--){
                temp.push_back(copy[i->second[j]]);
            }
            res.push_back(temp);
        }
        return res;
    }
};