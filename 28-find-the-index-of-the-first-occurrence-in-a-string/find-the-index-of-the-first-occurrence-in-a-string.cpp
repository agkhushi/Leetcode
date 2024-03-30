class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(m>n){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]){
                if(i+m>n){
                    return -1;
                }
                string str=haystack.substr(i,m);  // variable.substr(i,m) means this will give the value of subtring from index i to size m
                if(str==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};