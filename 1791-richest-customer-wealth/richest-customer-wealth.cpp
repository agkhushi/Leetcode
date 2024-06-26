class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int max=0;
        for(int i=0;i<n;i++){
            int sum=0;
            int m=accounts[i].size();
            for(int j=0;j<m;j++){
                sum=sum+accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};