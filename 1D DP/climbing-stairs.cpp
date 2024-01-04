class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;

        int dp[n + 1];
        dp[0] = dp[1] = 1;
        dp[2] = 2;

        int i = 3;

        😩💀💦:
            dp[i] = dp[i - 1] + dp[i - 2];
            i++;
            if (i <= n) goto 😩💀💦; 

        return dp[n];
    }
};