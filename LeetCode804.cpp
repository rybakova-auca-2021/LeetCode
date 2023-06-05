class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> result;

        for(string word : words) {
            string res = "";
            for(char ch : word) {
                res += code[ch - 'a'];
            }
            result.insert(res);
        }
        return result.size();
    }
};