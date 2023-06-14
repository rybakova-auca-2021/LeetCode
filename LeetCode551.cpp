class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;
        int present = 0;
        for(char letter : s) {
            if(letter == 'A') {
                absent++;
                if(absent >= 2) return false;
            } 
            if(letter == 'L') {
                late++;
                if(late >= 3) return false;
            }    

            else late = 0;
        }
        return true;
    }
};