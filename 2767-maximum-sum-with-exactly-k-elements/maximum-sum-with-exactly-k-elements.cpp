class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int counter=0;
        int sum=0;
        while(counter!=k){
            sum+=nums[n-1];
            nums[n-1]+=1;
            counter++;
        }
        return sum;
    }
};