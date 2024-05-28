class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finall;
        for(int i=1;i<=numRows;i++){
            vector<int> answer ;
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    answer.push_back(1);
                }
                else{
                    int x = finall[i-2][j]+finall[i-2][j-1];
                    answer.push_back(x);
                }
            }
            finall.push_back(answer);
        }
        return finall;
    }
};