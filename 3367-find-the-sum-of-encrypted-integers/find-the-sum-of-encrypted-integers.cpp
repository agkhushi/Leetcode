class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<=n-1;i++){
            int num = nums[i];
            if(nums[i] < 10){
                sum+=nums[i];
            }
            else{
                string str = to_string(num);
                char max_digit = *max_element(str.begin(), str.end());  // Find the largest digit
                int encrypted_num = stoi(string(str.size(), max_digit));  // Create the encrypted number
                sum += encrypted_num;
            }
        }
        return sum ; 
    }
};