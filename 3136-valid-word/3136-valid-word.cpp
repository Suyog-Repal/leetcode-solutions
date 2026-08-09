class Solution {
public:
    bool isValid(string word) {
       int n = word.size(); 
       if(n<3) return false;
       string vowels = "aeiouAEIOU";
       int cons=0, vow=0, digits=0,upper=0,lower=0;
       for(char c: word){
         if(isdigit(c)) digits++;
         if(islower(c)) lower++;
         if(isupper(c)) upper++;
         if(vowels.find(c) !=string::npos) vow++; 
         else if(isalpha(c)) cons++;
         if(ispunct(c)) return false;
       }
       if((upper || lower|| digits) && vow && cons) return true;
       return false; 
    }
};