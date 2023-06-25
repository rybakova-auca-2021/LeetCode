class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        for(auto num : nums) {
            if(num != min && num != max) {
                return num;
            }
        }
        return -1;
    }
};