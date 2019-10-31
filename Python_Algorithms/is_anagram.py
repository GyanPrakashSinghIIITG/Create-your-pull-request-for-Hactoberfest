from collections import Counter 

def checkAnagram(num1,num2): 
	bin1 = bin(num1)[2:] 
	bin2 = bin(num2)[2:] 
	zeros = abs(len(bin1)-len(bin2)) 
	if (len(bin1)>len(bin2)): 
		bin2 = zeros * '0' + bin2 
	else: 
		bin1 = zeros * '0' + bin1
	dict1 = Counter(bin1) 
	dict2 = Counter(bin2)
	if dict1 == dict2: 
		print('Yes') 
	else: 
		print('No') 

if __name__ == "__main__": 
	num1 = int(input('Enter first number'))
	num2 = int(input('Enter second number'))
	checkAnagram(num1,num2) 
	
