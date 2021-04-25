class Solution():
	#solve easy problem, e.g. 112
	def solve(self, num, sum):
		if sum % 3 == 0:
			if num % 3 == 0:
				return 9
			if num % 3 == 1:
				return 7
			return 8

		if sum % 3 == 1:
			if num % 3 == 0:
				return 8
			if num % 3 == 1:
				return 9
			return 7	
		if sum % 3 == 2:
			if num % 3 == 0:
				return 7
			if num % 3 == 1:
				return 8
			return 9

	def main(self, m):
		summ = 0

		#Sum up all digits 
		for i in range(len(m)):
		    summ += (int)(m[i])

		#loop the number linearly to check
		#whether impossible to change one digit of the number or not
		for i in range(0, len(m)):
			#if the digit is max
			#then no need to change
			if (int)(m[i]) == 9:
				continue
			else:
				x = self.solve((int)(m[i]), summ)
				
				#assign the changed number to variable tmp
				tmp = m[0:i] + str(x) + m[i + 1:]

				#if the changed number is larger than the current one
				#then print that number and return
				#or else continue the loop
				if (int)(tmp) > (int)(m):
					# print(tmp)
					return tmp
				else:
					continue

		#If the number hasn't changed at all
		#then just have to change the last digit
		#to make the changing number as small as possible
		tmp = m[0:len(m) - 1]
		if summ % 3 == 0:
			if (int)(m[i]) % 3 == 0:
				m = tmp + str(6)
			elif (int)(m[i]) % 3 == 1: #7
				m = tmp + str(4)
			else: #8
				m = tmp + str(5)
		
		elif summ % 3 == 1:
			if (int)(m[i]) % 3 == 0: #9
				m = tmp + str(8)		
			elif (int)(m[i]) % 3 == 1:
				m = tmp + str(9)
			else:
				m = tmp + str(7)

		else: #988
			if (int)(m[i]) % 3 == 0: #9	
				m = tmp + str(7)
			elif (int)(m[i]) % 3 == 1:
				m = tmp + str(8)
			else:
				m = tmp + str(9)		
		return m 

if __name__== "__main__":
	NewNum = Solution()
	print(NewNum.main(input()))