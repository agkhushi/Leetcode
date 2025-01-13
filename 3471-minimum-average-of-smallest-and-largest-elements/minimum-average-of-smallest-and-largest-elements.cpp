class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int first=0;
        int last=n-1;
        while(first<=last){
            double avg =(double) (nums[first]+nums[last])/2;
            averages.push_back(avg);
            first++;
            last--;
        }
        return *min_element(averages.begin(),averages.end());
    }
};