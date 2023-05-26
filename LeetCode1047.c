class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";

        for(char character : s) {
            if(result.back() == character) {
                result.pop_back();
            } else {
                result.push_back(character);
            }
        }
        return result;
    }
};