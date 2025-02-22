class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elementSum=0;
        int digitSum=0;
        for(int i=0;i<=n-1;i++){
            elementSum += nums[i];
        }
        for(int i = 0; i <= n - 1; i++) {  
            int num = nums[i]; 
            while (num > 0) {   
                int rem = num % 10;
                digitSum += rem;
                num /= 10; 
            }
        }

        int ans = abs(elementSum - digitSum);
        return ans;
    }
};