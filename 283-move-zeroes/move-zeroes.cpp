class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zeroes=0;
        for(int i=0;i<=n-1;i++){
            if(nums[i]!=0){
                if(zeroes!=i){
                   swap(nums[zeroes],nums[i]);
                }
                zeroes++;
            }
        }
    }
};

