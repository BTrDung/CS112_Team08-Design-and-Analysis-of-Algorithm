import numpy as np 

def mod(mat): 
    base = 1000000007
    for i in mat: 
        for j in i: 
            j = j % base
    return mat


def fastPow(mat, number): 
    if number == 0:
         return np.array([[1, 0], [0, 1]])
    mul = mod(fastPow(mat, number // 2))
    if number % 2 == 1: 
        return mod(np.dot(mod(np.dot(mul, mul)), mat))
    return mod(np.dot(mul, mul))

n, k = map(int, input().split())
result = np.reshape(mod(np.dot(fastPow(np.array([[1, 1], [1, 0]]), k * 2), np.array([[1], [0]]))), 2)
print((result[0] * n) % 1000000007)
