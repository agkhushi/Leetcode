class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int n=pref.size();
        for(int i=0;i<words.size();i++){
            if(words[i].size()<n){
                continue;
            }
            else{
                for(int j=0;j<n;j++){
                    if(words[i][j]!=pref[j]){
                        break;
                    }
                    if(j==n-1) count++;
                }
            }
            
        }
        return count;
    }
};