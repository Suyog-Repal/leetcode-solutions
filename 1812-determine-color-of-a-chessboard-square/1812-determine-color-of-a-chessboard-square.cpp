class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0]-'a'+1; 
        int y = coordinates[1]-'0'; 
        cout << x << " " << y<< endl; 
        if(x%2 == y%2){
            return false; 
        }
        return true; 
    }
};