class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        if(n>15 || n<1){
            return 0;
        }
        unordered_map<char,int> romanToIntMap={
            { 'I',1},
            {'V',5},
            { 'X',10},
            {' L',50},
            {'C',100},
            {'D',500},
            { 'M',1000}
        };
        int total=0;
        int prevValue=0;
        for(int i=n-1;i>=0;i--){
            int currentValue = romanToIntMap[s[i]];
            if(currentValue < prevValue){
                total -= currentValue;
            }
            else{
                total += currentValue ; 
            }
            prevValue = currentValue;
        }    
        return total ;
    }
};