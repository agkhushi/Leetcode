class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int single_day=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            single_day=min(single_day,prices[i]);
            int differrent_day=prices[i]-single_day;
            profit=max(profit,differrent_day);
        }
        return profit;
    }
};
