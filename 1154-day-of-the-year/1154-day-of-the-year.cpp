class Solution {
public:
    int dayOfYear(string date) {
        vector<int>months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        
        int year = stoi(date.substr(0, 4)); 
          if(year%400==0 || (year%4==0 && year%100 !=0)){
            months[1] = 29;
        }else months[1] = 28;
        cout << year<<endl; 
        cout << months[1] << endl;
        int month = stoi(date.substr(5,2)); 
        int day = stoi(date.substr(8,2));
      
        vector<int> prefix(12+1);
        prefix[0] = 0;
        for(int i=1;i<=12;i++){
         prefix[i] = prefix[i-1]+months[i-1];
        }
        int ans = 0;
        cout << prefix[month-1] << endl; 
        cout << day << endl; 
        ans += prefix[month-1] + day; 
        
        return ans; 
    }
};