class Solution {
public:
    // int solve(int m, int n, vector<vector<int>>& dp){
    //     if(m == 0 && n == 0) return 1;
    //     if(m < 0 || n < 0) return 0;

    //     if(dp[m][n] != -1) return dp[m][n];
    //     return dp[m][n] = solve(m-1, n, dp) + solve(m, n-1, dp);
    // }

    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m, vector<int>(n, -1));
        // return solve(m - 1, n - 1, dp);

        vector<int> dp(n, 1);

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                dp[j] = dp[j] + dp[j-1];
            }
        }

        return dp[n-1];
    }
};