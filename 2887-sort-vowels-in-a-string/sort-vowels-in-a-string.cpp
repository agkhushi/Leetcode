class Solution {
public:
    string sortVowels(string s) {
      vector<int> seq;
      int n = s.size();
      for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            seq.push_back(s[i]);
        }
      }  
      sort(seq.begin(),seq.end());
      int m=seq.size();
      int count=0;
      for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
           s[i] = seq[count] ;
            count++;
        }
      }
      return s;
    }
};