def Xornocci(a,b,n):
    c = a ^ b
    if n%3 == 0:
        return c
    elif n%3 == 1:
        return a
    else:
        return b
        
# arr[i] = arr[i-1]^arr[i-2]        
a=int(input('Enter First Term'))
b=int(input('Enter Second Term'))
n=int(input('Enter n'))
Xornocci(a,b,n)
