class Solution {
public:
    int reverse(int x) {
        long rev =0;
        while(x!=0){
            int reminder=x%10;
            rev =(rev*10)+reminder;
            x=x/10;
        }

        if(rev>INT_MAX || rev<INT_MIN){
            
            return 0;
        }
        return int(rev);
    }
};