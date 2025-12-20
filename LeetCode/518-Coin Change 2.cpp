class Solution {
public:
    vector<vector<int>> dp;

    int find(int index, int amount, vector<int>& coins) {
        if (amount == 0) return 1;
        if (index < 0 || amount < 0) return 0;

        if (dp[index][amount] != -1)
            return dp[index][amount];

        dp[index][amount] =
            find(index, amount - coins[index], coins)
          + find(index - 1, amount, coins);

        return dp[index][amount];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp.assign(n, vector<int>(amount + 1, -1));
        return find(n - 1, amount, coins);
    }
};
