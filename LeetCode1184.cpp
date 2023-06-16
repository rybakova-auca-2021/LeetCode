class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination){
        if (start > destination) {
            swap(start, destination);
        }
        int result = 0, total = 0;
        for (int i = 0; i < distance.size(); i++) {
            if (i >= start && i < destination) {
                result += distance[i];
            }
            total += distance[i];
        }
        return min(result, total - result);
    }
};