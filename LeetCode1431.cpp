class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(), candies.end());

        std::vector<bool> result;
        for (int kidCandies : candies) {
            result.push_back(kidCandies + extraCandies >= maxCandies);
        }

        return result;
    }
};