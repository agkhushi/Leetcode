class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<=n-1;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};