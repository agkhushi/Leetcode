class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            count+=nums[i];
        }
        if(count%k!=0){
            return count%k;
        }
        return 0;
    }
};