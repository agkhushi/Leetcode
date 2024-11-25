class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int positives = 0;
        int negatives = 1;
        for(int i=0;i<=n-1;i++){
            if(nums[i]>0){
                result[positives]=nums[i];
                positives+=2;
            }
            else{
                result[negatives]=nums[i];
                negatives+=2;
            }
        }
        return result;
    }
};