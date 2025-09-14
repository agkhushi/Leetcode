class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
         if(n!=m){
                return false;
            }
        unordered_map<char,char> copy_S;
        unordered_map<char,char> copy_T;
        for(int i=0;i<n;i++){
            if(copy_S.find(s[i])==copy_S.end() && copy_T.find(t[i])==copy_T.end()){
                copy_S[s[i]]=t[i];
                copy_T[t[i]]=s[i];
            }else{
                if(copy_S[s[i]] != t[i] || copy_T[t[i]] != s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};