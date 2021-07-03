class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        int max=-1;
        map<int,int> mp;
        while(mp.size()<=2 && j!=fruits.size()){
            if(mp.find(fruits[j])==mp.end()){
                mp.insert(pair<int,int>(fruits[j],1));
            }
            else{
                mp[fruits[j]]++;
            }
            while(mp.size()==3){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
            }
            if(j-i+1>max){
                cout<<"j"<<j<<" i"<<i<<"\n";
                max=j-i+1;
            }
            j++;
        }
        return max;
    }
};