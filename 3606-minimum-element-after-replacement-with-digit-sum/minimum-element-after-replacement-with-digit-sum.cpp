class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            while(nums[i]>0){
            int prev=nums[i]%10;
            sum+=prev;
            nums[i]=nums[i]/10;
            }
            result.push_back(sum);
        }
        int replacement=*min_element(result.begin(),result.end());
        return replacement;

    }
};