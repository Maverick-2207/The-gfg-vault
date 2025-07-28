class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hashmap to store numbers and their indices
        unordered_map<int , int> map;

        // Traverse the array once
        for(int i = 0; i < nums.size(); i++) {
            int current = nums[i];                   // Current number
            int required = target - current;         // The number we need to find

            // Check if the required number is already in the map
            if(map.find(required) != map.end()) {
                // If yes, return the pair of indices: (index of required, current index)
                return { map[required], i };
            }

            // If not, store the current number with its index in the map
            map[current] = i;
        }

        // If no pair is found, return empty vector
        return {};
    }
};
