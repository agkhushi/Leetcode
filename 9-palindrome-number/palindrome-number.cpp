class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
    long long n=x;
    long long reverse=0;
    
    while(n!=0){
    int digit=n%10;
    reverse=(reverse*10)+digit;
    n=n/10;
    };
    
    return (reverse==x);
    }
};