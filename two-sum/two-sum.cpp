class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> lookup;
        vector<int> fin;
        for(int i=0;i!=nums.size();i++){
            lookup.insert(pair<int,int>(nums[i],i));
        }
        for(int i=0;i!=nums.size();i++){
            auto x=lookup.find(target-nums[i]);
            if(x!=lookup.end() && x->second!=i){
                fin.push_back(i);
                fin.push_back(x->second);
                break;
            }
        }
        return fin;
    }
};