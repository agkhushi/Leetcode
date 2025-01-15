class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;
        //int n=nums.size();
        //int first = 0;
        //int last = n;
        for(int i=0;i<n;i++){
            answer.push_back(nums[i]);
            answer.push_back(nums[i+n]);
            //first++;
            //last++;
        }
        return answer;
    }
};