class Solution {
public:
    string reformatDate(string date) {
        map<string, string> month;
        month.insert(pair<string,string>("Jan","01"));
        month.insert(pair<string,string>("Feb","02"));
        month.insert(pair<string,string>("Mar","03"));
        month.insert(pair<string,string>("Apr","04"));
        month.insert(pair<string,string>("May","05"));
        month.insert(pair<string,string>("Jun","06"));
        month.insert(pair<string,string>("Jul","07"));
        month.insert(pair<string,string>("Aug","08"));
        month.insert(pair<string,string>("Sep","09"));
        month.insert(pair<string,string>("Oct","10"));
        month.insert(pair<string,string>("Nov","11"));
        month.insert(pair<string,string>("Dec","12"));
        string day;
        int space=0;
        string m="";
        string temp="";
        for(int i=0;i!=date.size();i++){
            if(date[i]==' ' && space==0){
                day=temp;
                temp="";
                space++;
            }
            else if(!isalpha(date[i]) && space==0){
                temp+=date[i];
            }
            else if(date[i]==' ' && space==1){
                cout<<month[temp];
                m=month[temp];
                cout<<m;
                temp="";
                space++;
            }
            else if(space==1 || space==2){
                temp+=date[i];
            }
        
            
            
        }
        if(stoi(day)<10){
            day="0"+day;
        }
        return temp+ "-" + m + "-" + day;
    }
};