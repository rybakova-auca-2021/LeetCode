class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> result; //set to store unique elements
       for(int num : nums) {
           result.insert(num); //take every element from the vector and add them to the result
       }

       int index = 0;
       for(int element : result) { //return every unique element to the vector
           nums[index] = element;
           index++;
       }

       return result.size();
    }
};