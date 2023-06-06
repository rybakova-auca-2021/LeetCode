#include <stdlib.h>
#include <stdio.h>

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> set;
        int count = 0;
        bool isInSet = false;
        for(int i = 0; i < allowed.size(); i++) {
            char ch = allowed[i];
            set.insert(ch);
        }
        for(auto word : words) {
            isInSet = true;
            for(int j = 0; j < word.size(); j++) {
                char letter = word[j];
                if(set.find(letter) == set.end()) {
                    isInSet = false;
                    break;
                }
            }
            if(isInSet) {
                count++;
            }
        }
        return count;
    }
};