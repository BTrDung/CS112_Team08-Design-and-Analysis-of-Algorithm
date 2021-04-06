class Solution(): 
    def __init__(self, value):
        self.value = sorted(value)
        self.dp = [[] for i in range(0, 3)] 
        self.delete = [] 

        for i in self.value: 
            self.dp[(int)(i) % 3].append(i)
                
    def sumOfNumber(self): 
        sum = 0
        for i in self.value: 
            sum += (int)(i)
        return sum 

    def fill(self, cate): 
        if cate == 1: 
            if len(self.dp[1]) >= 1:             # At least one element exist
                self.delete.append(self.dp[1][0]) 
                return None 	
            if len(self.dp[2]) >= 2:			# At least two element exist 
                self.delete.append(self.dp[2][1])
                self.delete.append(self.dp[2][0])
                return None

        if cate == 2: 
            if len(self.dp[2]) >= 1:             # At least one element exist
                self.delete.append(self.dp[2][0])
                return None
            if (len(self.dp[1])) >= 2:           # At least two element exist
                self.delete.append(self.dp[1][1])
                self.delete.append(self.dp[1][0])
                return None
        return None

    def solve(self):
        self.fill(self.sumOfNumber() % 3)

        pos_stack_delete = 0 
        result = ''
        self.value.reverse()

        for i in self.value:
            if len(self.delete) - 1 >= pos_stack_delete and i == self.delete[pos_stack_delete]:
                pos_stack_delete += 1 #skip this element
            else:
                result = result + i
        return result

Key = Solution(input().strip()).solve()
print(Key)