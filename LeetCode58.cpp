class Solution {
public:
    int lengthOfLastWord(string s) {
        std::istringstream iss(s);
        std::string lastWord, word;

        while(iss >> word) {
            lastWord = word;
        }

        return lastWord.length();
    }
};