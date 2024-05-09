class Solution {
public:
    string generateTheString(int n) {
        int i=1;
        string s="";
        if(n%2==0){
            while(i<=n){
                if(i==n){
                    s+="z";
                    return s;
                }
                else{
                    s+="p";
                    i++;
                }
            }
        }
        else{
            while(i<=n){
                s+="p";
                i++;
            }
            return s;
        }
        return "";
    }
};