class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Clean up invalid numbers
        for (int i = 0; i < n; ++i) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;
            }
        }

        // Step 2: Mark presence
        for (int i = 0; i < n; ++i) {
            int val = abs(nums[i]);
            if (val >= 1 && val <= n) {
                nums[val - 1] = -abs(nums[val - 1]);
            }
        }

        // Step 3: Find the first missing positive
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0)
                return i + 1;
        }

        // Step 4: All numbers present
        return n + 1;
    }
};
