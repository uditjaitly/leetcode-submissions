class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        vector<int> hr;
        vector<int> vr;
        hr.push_back(horizontalCuts[0]);
        vr.push_back(verticalCuts[0]);
        for(int i=0,j=1;i!=horizontalCuts.size()-1;i++,j++){
            hr.push_back(horizontalCuts[j]-horizontalCuts[i]);
        }
        for(int i=0,j=1;i!=verticalCuts.size()-1;i++,j++){
            vr.push_back(verticalCuts[j]-verticalCuts[i]);
        }
        hr.push_back(h-horizontalCuts[horizontalCuts.size()-1]);
        vr.push_back(w-verticalCuts[verticalCuts.size()-1]);
        
        sort(hr.begin(),hr.end());
        sort(vr.begin(),vr.end());
        long ans=long(hr[hr.size()-1])*long(vr[vr.size()-1])% 1000000007;
        cout<<ans;
        return ans;
        
    }
};