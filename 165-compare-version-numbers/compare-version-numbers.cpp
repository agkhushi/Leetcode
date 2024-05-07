class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.length();
        int m=version2.length();
        int x = 0;
        int y=0;
        for(int i=0,j=0;i<n || j<m ;i++,j++){
            while(i<n && version1[i]!='.'){
                x=10*x + (version1[i++]-'0');
            }
             while(j<m && version2[j]!='.'){
                y=10*y + (version2[j++]-'0');
            }
            if(x>y){
                return 1;
            }
            else if(x<y){
                return -1;
            }
            x=0;
            y=0;
        }
        return 0;
    }
};