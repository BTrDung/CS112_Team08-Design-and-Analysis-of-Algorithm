def gcd(a, b): 
    if a == 0: return b
    else: return gcd(b % a, a)

a, b, c, d = map(int, input().split())

cnt = 0
while not(a == c and b == d): 
    if a * d > b * c: 
        print(0) 
        break
    
    a += 1 
    b += 1 
    cnt += 1
    x = gcd(a, b)
    a = a//x 
    b = b//x
    
if a == c and b == d: 
    print(cnt)
