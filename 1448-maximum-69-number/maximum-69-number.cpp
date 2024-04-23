class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='6' and count==0){
                s[i]='9';
                count ++;
            }
        }
        return stoi(s); // stoi convert string to integer 
    }
};