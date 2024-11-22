class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int consecutiveones=0;
        int maxones=0;
        for(int i=0;i<=n-1;i++){
            if(nums[i]==1 ){
                consecutiveones++;
            }
            else{
                maxones=max(maxones,consecutiveones);
                consecutiveones=0;
            }
        }
        maxones=max(maxones,consecutiveones);
        return maxones;
    }
};