class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string cs=words[i];
            string rev="";
            for(int j=0;j<cs.size();j++){
                rev=cs[j]+rev;
            }
            if(rev==cs){
                return cs;
            }
        }
        return "";
    }
};