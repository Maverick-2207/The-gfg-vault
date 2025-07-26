class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;  // base case: empty subarray has sum 0

        int count = 0;
        int prefixSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            // Check if there's a prefixSum that when removed gives sum = k
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k];
            }

            // Store the current prefixSum in the map
            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};
