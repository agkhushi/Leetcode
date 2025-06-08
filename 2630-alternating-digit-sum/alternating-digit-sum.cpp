class Solution {
public:
    int alternateDigitSum(int n) {
        // string s=to_string(n);
        
        // int answer = 0;
        // for(int i=0;i<s.size();i++){
        //     if(i%2==0){
        //         answer+=(int)(s[i]);
        //     }
        //     else{
        //         answer+=-1*(int)(s[i]);
        //     }
        // }
        // return answer;
        int answer=0;
        int l=log10(n)+1;
        bool sign=1;
        if(l%2==0){
            sign=0;
        }
        while(n>0){
            int rem=n%10;
            if(sign){
                answer+=rem;
                sign=0;
            }
            else{
                answer+=-1*rem;
                sign=1;
            }
            n/=10;
        }
        return answer;
    }
};