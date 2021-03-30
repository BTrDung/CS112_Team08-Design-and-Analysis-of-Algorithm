def delete(string, j):
    tmp = ""
    for i in range(len(string)):
        if i != j:
            tmp += string[i]
    return tmp

string = input()
summ, ans, tmp = 0, "", sorted(string, reverse=True)

for i in range(len(tmp)):
    ans += str(tmp[i])
    summ += (int)(tmp[i])

if summ % 3 == 0:
    print(ans)
else:
    for i in range(len(tmp))[::-1]:
        if (int)(ans[i]) % 3 == 1 and summ % 3 == 1:
            ans = delete(ans, i)
            break
        elif (int)(ans[i]) % 3 == 2 and summ % 3 == 2:
            ans = delete(ans, i)
            break
        else:
            continue
    print(ans)
# class Solution():
#     def __init__(self, hash):
#         self.hash = hash
    
#     def dele(self, j):
#         tmp = ""
#         for i in range(len(self.hash)):
#             if i != j:
#                 tmp += self.hash[i]
#         return tmp

#     def solve(self):
#         summ, ans, tmp = 0, "", sorted(self.hash)
#         for i in range(len(tmp)):
#             ans += str(tmp[i])
#             summ += (int)(tmp[i])
#         if summ % 3 == 0:
#             return ans
#         else:
#             for i in range(len(tmp))[::-1]:
#                 if (int)(ans[i]) % 3 == 1 and summ % 3 == 1:
#                     code = self.hash.dele(i)
#                     return code
#                 elif (int)(ans[i]) % 3 == 2 and summ % 3 == 2:
#                     code = self.hash.dele(i)
#                     return code
#                 else:
#                     continue

# if __name__ == '__main__':
#     answer = Solution(input())
#     print(answer.solve())
