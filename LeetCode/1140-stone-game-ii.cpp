class Solution {
public:
    int dp[2][101][101];  // turn, index, M

    int solve(vector<int>& piles, int turn, int i, int m) {
        int n = piles.size();
        if (i == n) return 0;

        if (dp[turn][i][m] != -1)
            return dp[turn][i][m];

        int res = (turn == 1) ? 100000 : -1;
        int score = 0;

        for (int x = 1; x <= min(2 * m, n - i); x++) {
            score += piles[i + x - 1];

            if (turn == 0) { // Alice
                res = max(res,
                          score + solve(piles, 1, i + x, max(m, x)));
            } 
            else { // Bob
                res = min(res,
                          solve(piles, 0, i + x, max(m, x)));
            }
        }

        return dp[turn][i][m] = res;
    }

    int stoneGameII(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return solve(piles, 0, 0, 1);
    }
};
