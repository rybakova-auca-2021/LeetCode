class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        reverse(str.begin(), str.end());
        if(str == to_string(x)) {
            return true;
        }
        return false;
    }
};