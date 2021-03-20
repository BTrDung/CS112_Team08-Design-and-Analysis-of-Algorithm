def dot(matA, matB): 
    mod = 1000000007
    a = (matA[0][0]*matB[0][0])%mod + (matA[0][1]*matB[1][0])%mod # checked
    b = (matA[0][0]*matB[0][1])%mod + (matA[0][1]*matB[1][1])%mod # checked
    c = (matA[1][0]*matB[0][0])%mod + (matA[1][1]*matB[1][0])%mod # checked
    d = (matA[1][0]*matB[0][1])%mod + (matA[1][1]*matB[1][1])%mod # checked
    return [[a, b], [c, d]]


def fastPow(mat, number):
    if number == 1: 
        return mat
    mult = fastPow(mat, number // 2)
    if number % 2 == 1: 
        return dot(dot(mult, mult), mat)
    return dot(mult, mult)


n, k = map(int, input().split())
matr = fastPow([[1, 1], [1, 0]], k * 2)
print((matr[0][0] * n) % 1000000007)

