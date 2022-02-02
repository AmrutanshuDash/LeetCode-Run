class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int n = prices.size();
        int cur_max = prices[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            max_profit = max(max_profit, cur_max - prices[i]);
            cur_max = max(cur_max, prices[i]);
        }
        return max_profit;
    }
};