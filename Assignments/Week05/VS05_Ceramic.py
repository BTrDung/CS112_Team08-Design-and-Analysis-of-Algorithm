class Solution(): 
    def __init__(self, n, arr, valPow = 19, limPow = 100000009): 
        self.arr = arr 
        self.n = n  
        self.valPow = valPow
        self.limPow = limPow 

        self.basePow = [1 for i in range(0, 50000 + 1)]
        for i in range(1, 50000 + 1): 
            self.basePow[i] = self.basePow[i-1] * valPow % limPow

        self.hashCode = [0 for i in range(0, n + 2)] 
        for i in range(1, n + 1): 
            self.hashCode[i] = self.hashCode[i-1] + self.basePow[self.arr[i-1]]

        
    def getCode(self, left, right): 
        return self.hashCode[right] - self.hashCode[left - 1] 
    
    def getMap(self, batchSize):
        return [self.getCode((iter - 1) * batchSize + 1, iter * batchSize)
                for iter in range(1, self.n // batchSize + 1)]

    def findDiff(self, org, value): 
        for i in org: 
            if i != value: 
                return i
        return -1

    def solve(self):
        result = []
        for i in [_ for _ in range(1, self.n//2 + 1) if self.n % _ == 0]: 
            mapPaint = self.getMap(i)
            first = mapPaint[0] 
            second = self.findDiff(mapPaint, first)

            if second != -1: 
                cnt1 = mapPaint.count(first) 
                cnt2 = mapPaint.count(second) 
                if cnt1 + cnt2 == len(mapPaint): 
                    result.append([i, cnt1, cnt2])
        return result 
            

        
def printSoution(result): 
    if len(result) == 0: 
        print(-1)
    else:   
        print(len(result))
        for i in result: 
            print(*i, sep=" ")
    return None
 
Ceramic = Solution(int(input()), list(map(int, input().split()))).solve()
printSoution(Ceramic)