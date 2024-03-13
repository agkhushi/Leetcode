class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return n;
        int l = 1;
        int r = n;
        int sum=(n*(n+1))/2;
        while(l<r){
            int mid = l+(r-l)/2;
            int firstsum=(mid*(mid+1))/2;
            int endsum=sum-firstsum+mid;
            if(firstsum==endsum){
                return mid;
            }
            else if(firstsum<endsum){
                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }
        return -1;
    }
};