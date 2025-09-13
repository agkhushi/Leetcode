class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.size();
        int max_vowel=0;
        int max_cons=0;
       unordered_map<char,int> freq;
       for(char c:s){
        freq[c]++;
       }
       for(auto it:freq){
        cout<<it.first<<" "<<it.second <<" "<<endl;
       }

       for(auto it:freq){
        char temp = it.first;
        if(temp == 'a' || temp =='e' || temp=='i'||temp=='o'||temp=='u'){
            max_vowel=max(it.second,max_vowel);
        }else{
            max_cons=max(it.second,max_cons);
        }
       }
    return max_vowel + max_cons ;   
    }
};