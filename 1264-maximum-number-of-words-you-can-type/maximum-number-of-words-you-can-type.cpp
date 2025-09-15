class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
       int n=text.size();
       int m=brokenLetters.size();
       int hash[26]={0};
       for(char c:brokenLetters){
        hash[c-'a'] = 1;
       }
      bool result = true;
      for(int i=0;i<=n;i++){
        if(i==n || text[i]==' '){
            if(result) count++;
            result=true;
        }
        else{
            if(hash[text[i]-'a']==1){
                result=false;
            }

        }
      }
       return count ; 
    }
};