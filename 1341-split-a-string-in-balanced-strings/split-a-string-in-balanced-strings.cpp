class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int orientation=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
               orientation++;
            }
            else if(s[i]=='L'){
                orientation--;
            }
            if(orientation==0){
                count++;
            }
        }
        return count;
    }
};