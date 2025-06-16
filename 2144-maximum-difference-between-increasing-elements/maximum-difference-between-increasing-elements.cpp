class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int minimum=nums[0];
        int difference=-1;
        for(int i=1;i<n;i++){
            if(nums[i]-minimum > difference && nums[i]!=minimum){
                difference= nums[i]-minimum;
            }
            else{
                if(nums[i]<minimum){
                  minimum = nums[i];
                }
            }
        }
        return difference;
    }
};