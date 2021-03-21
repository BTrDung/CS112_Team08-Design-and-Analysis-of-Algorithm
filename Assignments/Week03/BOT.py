
#Khởi tạo giá trị 
left = 0 
right = 0
sum = 0
maxx = -999999999999999
result = 0 
newleft = 0


#Nhập số phần tử và nhập mảng 
n = int(input())
arr = list(map(int, input().split()))

for i in range(0, len(arr)): 
    if arr[i] > maxx:
        maxx = arr[i]; 
        left = i 
        right == i 

if maxx < 0: 
    print(left + 1, right + 1, maxx)
else:
    left = 0 
    right = 0
    for i in range(0, len(arr)): 
        sum += arr[i]

        if sum < 0: 
            sum = 0
            newleft = i + 1
        
        if sum > result:
            result = sum
            right = i
            left = max(left, newleft)

    print(left + 1, right + 1, result)
