class Solution {
public:
    string reformatDate(string date) {
        vector<string> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        stringstream ss(date); 
        string word; 
        vector<string> temp; 
        while(ss >> word){
         temp.push_back(word); 
        }
        string str="";
        for(char c: temp[0]){
            if(isdigit(c)){
                str += c;
            }
        }
        string first = format("{:02}", stoi(str));
        int index = -1;
        for(int i=0;i<months.size(); i++){
            if(temp[1] == months[i]){
                index = i; 
                break; 
            }
        }
        index+=1;
        string second = format("{:02}", index);
        string ans = temp[2] + '-'+ second + '-'+  first ;
        return ans; 
    }
};