class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
           if(costs[i]>coins){
            break;
           }
           else{
            coins-=costs[i];
            count++;
           }
        }
        return count;
    }
};