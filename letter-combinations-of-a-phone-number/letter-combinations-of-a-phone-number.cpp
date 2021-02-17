class Solution {
public:
    vector<string> res;
    void dfs(string combination,string digits,map<char,string>& phone,int current){
        if(current==digits.size()){
            res.push_back(combination);
        }
    
        char pos=digits[current];
        string letters=phone[pos];
  
        for(int i=0;i!=letters.size();i++){
            string letter=letters.substr(i,1);
            
            dfs(combination+letter,digits,phone,current+1);
        }
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        map<char,string> phone;
        phone.insert(pair<char,string>('2',"abc"));
        phone.insert(pair<char,string>('3',"def"));
        phone.insert(pair<char,string>('4',"ghi"));
        phone.insert(pair<char,string>('5',"jkl"));
        phone.insert(pair<char,string>('6',"mno"));
        phone.insert(pair<char,string>('7',"pqrs"));
        phone.insert(pair<char,string>('8',"tuv"));
        phone.insert(pair<char,string>('9',"wxyz"));
        if(digits.size()==0){
            return res;
        }
        dfs("",digits,phone,0);
        
        return res;
    }
};