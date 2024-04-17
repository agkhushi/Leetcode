class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int number=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(count(nums.begin(),nums.end(),(-1)*nums[i])>=1){
                number=nums[i]*(-1);
                return number;
            }
        }
        return -1;
    }
};