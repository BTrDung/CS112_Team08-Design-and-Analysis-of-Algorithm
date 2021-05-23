n = int(input()) 
a = list(map(int, input().split()))
m = int(input()) 
b = list(map(int, input().split()))

def valid(flag): 
    pos = 0 
    for i in a:
        if i < flag: 
            pick = False
            while pos < m and pick == False: 
                pick = (i + b[pos]) >= flag
                pos += 1
            if pick == False: return False 
    return True  

def result(height): 
    pos = 0 
    result = []
    for i in range(0, n): 
        if a[i] < height: 
            pick = False
            while pos < m and pick == False: 
                pick = (a[i] + b[pos]) >= height
                pos += 1
                if pick == True: result.append(str(i + 1) + ' ' + str(pos))
    return result

def solve(): 
    left, right = (int)(1), (int)(500000000)
    mid = (left + right) >> 1
    while mid != left and right != mid: 
        if valid(mid) == True: 
            left = mid 
        else: 
            right = mid
        mid = (left + right) >> 1
    if valid(right) == True: return result(right), right
    return result(left), left
    
result, height = solve()
print(height, len(result))
