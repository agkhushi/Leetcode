class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> answer;
        int n=nums.size();
        int hash[100001]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
         for (int i = 1; i <= n; i++) {
              if(hash[i]==0){
                answer.push_back(i);
              }
        }
        return answer;
    }
};