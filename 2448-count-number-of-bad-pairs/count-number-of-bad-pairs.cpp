class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //CHECK
        unordered_map<int,int> freq;
        long long counter=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            int key = nums[i] - i;
            counter += freq[key];
            freq[key]++;
        }
        return (n*(n-1))/2 - counter;
    }
};