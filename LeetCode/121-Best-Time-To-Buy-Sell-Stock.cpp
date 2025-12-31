class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int stock=prices[0];
        for(int i=1;i<n;i++){
            profit=max(profit,prices[i]-stock);
            stock=min(stock,prices[i]);
        }
        return profit;

    }
};
