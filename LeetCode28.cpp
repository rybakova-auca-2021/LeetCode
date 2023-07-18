class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if(pos != haystack.npos) {
            return pos;
        } else {
            return -1;
        }
    }
};