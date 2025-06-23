class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int hash[216]={0};
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        for(int i=0;i<n;i++){
        if(hash[s[i]]<2){
               return i; 
            }
        }    
        return -1;
    }
};