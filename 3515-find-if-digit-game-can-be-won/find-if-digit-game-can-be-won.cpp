class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sum =0 ;
        int moresum =0;
        for(int i=0;i<=n-1;i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else{
                moresum += nums[i];
            }
        }
        if(sum == moresum){
            return false;
        }
        else{
            return true;
        }
    }
};