class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<n;i++){
           if(count(nums.begin(),nums.end(),nums[i])>2){
               return false;
           }
       }
        return true ;
    }
};