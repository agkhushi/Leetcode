class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int answer=0;
        int count=0;
        
        for(int i=0;i<n;i++){
            
            count+=nums[i];
            if (i == n - 1 || nums[i] >= nums[i + 1]) {
                answer = max(answer, count); // Update the answer
                count = 0; // Reset count for the next ascending subarray
            }
            
        }
        return answer;
    }
};