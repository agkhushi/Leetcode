class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int count = 1; 
        int i = 0;
        while (i < n) {
            char ch = word[i];
            int groupLen = 1;
            while (i + 1 < n && word[i + 1] == ch) {
                groupLen++;
                i++;
            }
            if (groupLen >= 2) {
                count += (groupLen - 1); 
            }
            i++;
        }
        return count;
    }
};
