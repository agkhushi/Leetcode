class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int single_day=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int different_day=prices[i]-single_day;
            single_day=min(single_day,prices[i]);
            profit=max(profit,different_day);
        }
        return profit;
    }
};