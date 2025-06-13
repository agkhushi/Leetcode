class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum = 0;  // Reset sum for each new starting point
            for (int j = i; j < n; j++) {
                sum += nums[j];  // Extend subarray from i to j
                if (sum == k) {
                    count++;     // Found a valid subarray
                }
            }
        }

        return count;
    }
};
