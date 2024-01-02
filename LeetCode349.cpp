class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> map;
        for(int num : nums1) {
            map[num]++;
        }
        for(int num2 : nums2) {
            if(map[num2] > 0) {
                result.push_back(num2);
                map[num2] = 0;
            }
        }
        return result;
    }
};