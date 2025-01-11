class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        set<int> result;
        for(int i=0;i<n;i++){
            result.insert(nums[i]);
            int sum=0;
            while(nums[i]>0){
                sum=sum*10+nums[i]%10;
                nums[i]/=10;
            }
            result.insert(sum);
        }
        return result.size();
    }
};