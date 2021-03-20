n, k = map(int, input().split())
MOD = 1e9 + 7
def fibo(dp, n):
    dp[0], dp[1] = 0, 1
    for i in range(2, n + 1):
        dp[i] = (dp[i - 1] + dp[i - 2])
    return dp[n]

dp = [0 for _ in range(n<<2 + 1)]
fibo(dp, n<<1)
print(int)(dp[k + 3] * 3 % MOD)