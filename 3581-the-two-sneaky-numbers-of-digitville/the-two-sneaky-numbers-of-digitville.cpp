class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        set<int> result;
        for(int i=0;i<=n-1;i++){
            if(count(nums.begin(),nums.end(),nums[i])!=1){
                result.insert(nums[i]);
            }
        }
        vector<int> ans(result.begin(),result.end()) ;
        return ans;
    }
};