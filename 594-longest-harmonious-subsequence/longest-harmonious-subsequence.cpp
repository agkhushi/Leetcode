class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int digits=0;
        for(auto i:mpp){
            if (mpp.count(i.first + 1)) {
                digits = max(digits, i.second + mpp[i.first + 1]);
            }
        }
        return digits;
    }
};