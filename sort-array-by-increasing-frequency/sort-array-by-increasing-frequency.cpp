class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[1]==b[1]){
            return a[0]>b[0];
        }
        return a[1]<b[1];
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> res;
        map<int,int> frequency;
        
        for(int i=0;i!=nums.size();i++){
            frequency[nums[i]]++;
        }
        vector<vector<int>> sorted;
        for(auto i=frequency.begin();i!=frequency.end();i++){
            sorted.push_back({i->first,i->second});
        }
        
        sort(sorted.begin(),sorted.end(),cmp);
        for(int i=0;i!=sorted.size();i++){
            int t=sorted[i][1];
            while(t>0){
                res.push_back(sorted[i][0]);
                t--;
            }
            
        }
        return res;
        
    }
};