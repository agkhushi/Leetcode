class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0 ;
        int n = nums.size();
        for(int i=0;i<=n-1;i++){
            if(nums[i]>nums[(i+1)%n]){
                x++;
            }
        }
        if(x==0 || x==1){
            return true;
        }
        else{
            return false ;
        }
    }
};