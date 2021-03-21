def FFT(matA, matB): 
    mod = 1000000007
    a = (matA[0][0]*matB[0][0])%mod + (matA[0][1]*matB[1][0])%mod 
    b = (matA[0][0]*matB[0][1])%mod + (matA[0][1]*matB[1][1])%mod 
    c = (matA[1][0]*matB[0][0])%mod + (matA[1][1]*matB[1][0])%mod 
    d = (matA[1][0]*matB[0][1])%mod + (matA[1][1]*matB[1][1])%mod
    return [[a, b], [c, d]]


def fastPow(radix, exponent):
    if exponent == 1: 
        return radix
    base = fastPow(radix, exponent // 2)
    if exponent % 2 == 1: 
        return FFT(FFT(base, base), radix)
    return FFT(base, base)


#Input 
n, k = map(int, input().split()) 

#Calculate fibonanci 
matr = fastPow([[1, 1], [1, 0]], k * 2)

print((matr[0][0] * n) % 1000000007)
