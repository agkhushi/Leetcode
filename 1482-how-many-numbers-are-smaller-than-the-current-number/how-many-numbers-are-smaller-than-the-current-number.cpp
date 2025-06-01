class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n =nums.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i] && j!=i){
                    sum++;
                }
            }
            result.push_back(sum);
        }
        return result;
    }
};