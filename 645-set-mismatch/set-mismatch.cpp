class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
       // vector<int> result;
        //sort(nums.begin(),nums.end());
        int hash[10001]={0};
        int first;
        int second;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==2){
                first=i;
                //result.push_back(i);
            }
            else if(hash[i]==0){
                second=i;
               //result.push_back(i);
            }
              
        }
        return {first,second};
    }
};