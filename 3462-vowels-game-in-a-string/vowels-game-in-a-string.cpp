class Solution {
public:
    bool doesAliceWin(string s) {
        string vowels="aeiou";
        unordered_set<char> vowelset(vowels.begin(),vowels.end());
        int count=0;
        for(char c:s){
            if(vowelset.count(c)){
                count++;
            }
        }
        return count > 0;
    }
};