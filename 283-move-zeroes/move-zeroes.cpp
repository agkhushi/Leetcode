class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nonZeronumber=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                if(nonZeronumber!=i){
                    swap(nums[nonZeronumber],nums[i]);
                }
                nonZeronumber ++ ;
            }
        }
    }
};