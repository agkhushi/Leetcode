class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int counter=0;
        bool firstone = true;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(firstone){
                    firstone= false;
                    counter=0;
                    continue;
                }
                else if(counter<k){
                    return false;
                }
                else{
                    counter=0;
                }

            }
            else{
                counter++;
            }
        }
        return true;
    }
};