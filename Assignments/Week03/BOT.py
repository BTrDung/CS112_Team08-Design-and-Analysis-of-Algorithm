n = int(input())
arr = list(map(int, input().split()))

l = 0 
r = 0
sum = 0
maxx = -999999999999999
result = 0 
newl = 0 

for i in range(0, len(arr)): 
    if arr[i] > maxx:
        maxx = arr[i]; 
        l = i 
        r == i 
if maxx < 0: 
    print(l + 1, r + 1, maxx)
else:
    l = 0 
    r = 0
    for i in range(0, len(arr)): 
        sum += arr[i]

        if sum < 0: 
            sum = 0
            newl = i + 1
        
        if sum > result:
            result = sum
            r = i
            l = max(l, newl)

    print(l + 1, r + 1, result)
