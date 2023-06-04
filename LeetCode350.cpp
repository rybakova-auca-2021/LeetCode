class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> first; //element and count

        for(int num : nums1)  { // i take every number from nums1 and add their count to the map
            first[num]++;
        }
        for(int num2 : nums2) {
            if(first[num2] > 0) {
                result.push_back(num2);
                first[num2]--;
            }
        }
        return result;
    }
};