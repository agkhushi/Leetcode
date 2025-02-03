class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incr=1;
        int decr=1;
        int answer=1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                decr=1;
                incr++;
            }
            else if(nums[i]>nums[i+1]){
                incr=1;
                decr++;
            }
            else{
                decr=1;
                incr=1;
            }
            answer=max(answer,decr);
            answer=max(answer,incr);
        }
        return answer;
    }
};