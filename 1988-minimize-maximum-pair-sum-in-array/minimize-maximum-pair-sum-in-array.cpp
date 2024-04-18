class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int right=nums.size()-1;
        int left=0;
        int maxii=0;
        sort(nums.begin(),nums.end());
        while(left<right){
            int sum = nums[left]+nums[right];
            maxii=max(maxii,sum);
            left++;
            right--;
        }
        return maxii;
    }
};