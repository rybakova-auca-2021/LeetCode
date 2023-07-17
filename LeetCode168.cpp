#include <string>

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber > 0) {
            char ch = 'A' + (columnNumber - 1) % 26;
            result = ch + result;
            columnNumber = (columnNumber - 1) / 26;
        }
        return result;
    }
};
