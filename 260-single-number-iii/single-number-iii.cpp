class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> answer;
        int i=0;
        while(i<n){
            if(i==n-1 || nums[i]!=nums[i+1]){
                answer.push_back(nums[i]);
                if(answer.size()==2){
                    break;
                }
                i++;
            }
            else{
                i+=2;
            }
        }
        return answer;
    }
};