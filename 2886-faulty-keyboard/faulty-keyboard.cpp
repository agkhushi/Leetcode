class Solution {
public:
    string finalString(string s) {
        string rev="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                reverse(rev.begin(),rev.end());
            }
            else{
                rev+=s[i];
            }
        }
        return rev;
    }
};