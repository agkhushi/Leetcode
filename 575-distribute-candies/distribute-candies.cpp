class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int hash[10001]={0};
        sort(candyType.begin(),candyType.end());
        int i=1;
        int type=1;
        int ans=n/2;
        while(i<n){
            if(candyType[i]!=candyType[i-1]){
                type++;
            }
            i++;
        }
        return min(ans,type);
    }
};