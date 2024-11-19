class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());// reverse the whole array 
        reverse(nums.begin(),nums.begin()+k); //reverse the first k part jisse ehla ans miljaye pehla part 
        reverse(nums.begin()+k,nums.end());//this reverses the rest of the array jisse wo sort hojaye 
    }
};