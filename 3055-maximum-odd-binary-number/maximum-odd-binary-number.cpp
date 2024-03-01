class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int c=count(s.begin(),s.end(),'1');
        for(int i=0;i<n-1;i++){
            if(c>1){
                s[i]='1';
                c--;
            }
            else{
                s[i]='0';
            }
        }
        s[n-1]='1';
        return s;
    }
};