class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[n-1];
        //for(int i=0;i<=smallest;i++){
        //    if(i%nums[0]==0){
        //        gccd=i;
        //    }
        //}
        return gcd(smallest,largest);
    }
};