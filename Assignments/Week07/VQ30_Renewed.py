class Solution():
    def countCutTree(self, numCut, lazy, numDay): 
        return (numCut * numDay) - ((numDay // lazy) * numCut)

        
    def binarySearch(self, a, k, b, m, n, l = 1, r = 190000000000000000000):  
        mid = (l + r) // 2 
        while mid != l and mid != r: 
            x = self.countCutTree(a, k, mid) 
            y = self.countCutTree(b, m, mid) 
            if n - (x + y) > 0: 
                l = mid 
            if n - (x + y) <= 0: 
                r = mid 
            mid = (l + r) // 2

        if n - self.countCutTree(a, k, l) - self.countCutTree(b, m, l) <= 0: 
            return l 

        if n - self.countCutTree(a, k, r) - self.countCutTree(b, m, r) <= 0: 
            return r    
        return 0

    def main(self):  
        a, k, b, m, n = map(int, input().split())
        print(self.binarySearch(a, k, b, m, n))


if __name__ == '__main__':
    VQ30 = Solution()
    VQ30.main()