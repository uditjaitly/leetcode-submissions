class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copyStrs=strs;
        vector<vector<string>> res;
        map<string,vector<string>> hm;
        for(int i=0;i!=strs.size();i++){
            string temp=strs[i];
            sort(strs[i].begin(), strs[i].end());
            if(hm.find(strs[i])==hm.end()){
                hm[strs[i]]={temp};
            }
            else{
                hm[strs[i]].push_back(temp);
            }
        }
        
        for(auto itr=hm.begin();itr!=hm.end();itr++){
            res.push_back(itr->second);
        }
        
        
        return res;
    }
};