class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        //int i=0;
        // while(true){
        //     if(target == nums[i]){
        //         return true;
        //         i++;
        //     }
        // }
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                return true;
            }
        }
        return false;
    }
};