n, k = map(int, input().split()) 

dp = [n for _ in range(0, k + 1)] 
mod = 1000000007

for i in range(1, k + 1, 1): 
    sum = dp[i - 1]
    for j in range(0, i, 1): 
        sum = (sum + dp[j]) % mod
    dp[i] = sum 

print(dp[k])
