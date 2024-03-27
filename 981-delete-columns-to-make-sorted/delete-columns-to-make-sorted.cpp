class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int answer = 0;
        int n = strs.size();
        for(int j=0;j<strs[0].size();j++){
            for(int i=1;i<n;i++){
                if(strs[i][j]<strs[i-1][j]){
                    answer++;
                    break;
                }
            }
        }
       return answer;
    }
};