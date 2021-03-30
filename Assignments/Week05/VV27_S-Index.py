class Solution():
    def __init__(self, n, a):
        self.n = n
        self.a = sorted(a, reverse=True)

    def solve(self):
        for i in range(self.n)[::-1]:
            if self.a[i] >= i + 1:
                return i + 1
        return 0
        
if __name__ == '__main__':
    H_index = Solution(int(input()), list(map(int, input().split())))
    print(H_index.solve())
