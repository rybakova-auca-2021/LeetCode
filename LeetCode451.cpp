class Solution {
public:
    string frequencySort(string s) {
        map<char, int> map;                          // Create a map to store character frequencies
        multimap<int, char, greater<int>> mul;       // Create a multimap to store frequencies as keys and characters as values in descending order
        string res = "";

        for (int i = 0; i < s.size(); i++) {
            char element = s[i];
            map[element]++;                          // Count the frequency of each character
        }

        for (auto it : map) {
            mul.insert({it.second, it.first});        // Insert frequencies and characters into the multimap
        }

        for (auto it : mul) {
            for (int i = 0; i < it.first; i++) {
                res += it.second;                     // Append the character to the result string based on its frequency
            }
        }

        return res;
    }
};
