class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(char letterOfS : s) { 
            c ^= letterOfS;
        }
        for(char letterOfT : t) {
            c ^= letterOfT;
        }    
        return c;
    }
};