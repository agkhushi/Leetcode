class Solution {
public:
    int countPartitions(std::vector<int>& nums) {
        int n=nums.size();
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i]; 
        }
        int leftSum = 0;
        int count = 0;
        for (int i = 0; i < n- 1; i++) { 
            leftSum += nums[i]; 
            int rightSum = totalSum - leftSum; 
            if ((leftSum % 2) == (rightSum % 2)) {
                count++; 
            }
        }
        return count; 
    }
};