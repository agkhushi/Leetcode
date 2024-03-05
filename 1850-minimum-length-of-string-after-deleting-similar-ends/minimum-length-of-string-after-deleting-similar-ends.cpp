class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
       int prefix=0;
       int suffix=n-1;
       
      while(prefix<suffix && s[prefix]==s[suffix]){
          char current = s[prefix];
          while(prefix+1<suffix && s[prefix+1]==current){
              prefix++;
          }
          while(prefix<suffix-1 && s[suffix-1]==current){
              suffix--;
          }
          prefix++;
          suffix--;

        }
           return suffix-prefix+1;
    }
};