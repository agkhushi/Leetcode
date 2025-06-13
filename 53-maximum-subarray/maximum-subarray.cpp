class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];      // To keep track of the maximum sum found so far
        int currentSum = nums[0];  // To keep track of the current subarray sum
        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]); // Extend or start new subarray
            maxSum = max(maxSum, currentSum);                // Update maxSum if needed
        }
        return maxSum;
    }
};
