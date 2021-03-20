n, k = map(int, input().split()) 

dp = [0 for _ in range(0, k + 1)] 
dp[0] = n 

for i in range(1, k + 1, 1): 
    sum = 0
    for j in range(0, i, 1): 
        sum = sum + dp[j]
    sum = sum + dp[i - 1]; 
    
    dp[i] = sum 

print(dp[k])
