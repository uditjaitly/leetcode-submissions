class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=3){
            return 0;
        }
        return min({nums[nums.size()-4]-nums[0], nums[nums.size()-3]-nums[1], nums[nums.size()-2]-nums[2],nums[nums.size()-1]-nums[3]} );
    }
};