class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        queue<int> res;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val)  {
                res.push(i);
                count++;
            } else if (res.size()) {
                nums[res.front()] = nums[i];
                res.pop();
                res.push(i);
            }
        }

        return nums.size()-count;
    }
};