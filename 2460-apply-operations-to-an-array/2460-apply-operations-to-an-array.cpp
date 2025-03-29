class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
         int n = nums.size();

    // First pass: Perform operations
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    // Second pass: In-place zero shifting
    int idx = 0;  // Index to place non-zero elements
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[idx++] = nums[i];
        }
    }

    // Fill remaining positions with zeros
    while (idx < n) {
        nums[idx++] = 0;
    }

    return nums;  //  Return the final 
    }
    
};