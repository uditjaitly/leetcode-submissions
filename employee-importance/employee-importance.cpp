/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
     map<int,vector<int>> direct;
    map<int,int> score;
    int finScore=0;
    
    
    void calcScore(int id){
       finScore=finScore+score[id];
        vector<int> sub=direct[id];
        for(int i=0;i!=sub.size();i++){
            calcScore(sub[i]);
        }
    }
    
    
    int getImportance(vector<Employee*> employees, int id) {
       
        for(int i=0;i!=employees.size();i++){
            direct.insert(pair(employees[i]->id,employees[i]->subordinates));
            score.insert(pair(employees[i]->id,employees[i]->importance));
        }
        calcScore(id);
        return finScore;
    
    }
};