class Solution {
public:
    string interpret(string command) {
        string result = "";
        int n = command.size();  
        for(int i =0; i<n; i++){
          if(command[i] == 'G'){
            result +='G';
          }else if(command[i] =='(' &&  command[i+1]== ')'){
            result+='o';
             i++;
          }else if(command[i] == '(' && command[i+1] == 'a'){
            result+="al"; 
            i++;
          }
        }
        return result;
    }
};