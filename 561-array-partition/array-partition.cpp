class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%2==1){
                sum+=nums[i-1];
            }
        }
        return sum;
    }
};