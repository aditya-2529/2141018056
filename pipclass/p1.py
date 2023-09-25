#17
'''import sys
a = 6
b = 5.55
c = 'A'
d = True
e = "ABC"
print("Size of int",sys.getsizeof(a))
print("Size of float",sys.getsizeof(b))
print("Size of char",sys.getsizeof(c))
print("Size of boolean",sys.getsizeof(d))
print("Size of string",sys.getsizeof(e))'''

#1
x = 0
y = 6
z = 10
print((x<y)or(not(z==y)and(z<x)))
x = 1
y = 1
z = 1
print((x<y)or(not(z==y)and(z<x)))

#2
print(-7*20+8/16*2+54)
print(7**2//9%3)
print((7-4*2)*10-25*8//5)
print(5%10+10-25*8//5)
#print('hello'*2-5)

#3
print('hi'>'hello' and 'bye' < 'Bye')
print('hi'>'hello' or 'bye' < 'Bye')
print(7>8 or 5<6 and 'I am dine' > ' i am not fine')
print(10!=9 and 29>=29)
print(10!=9 and 29>=29 and 'hi' > 'hello' or 'bye' < 'Bye' and 7 <= 2.5)

#4
print(5%10+10<50 and 29>=29)
print(7**2<=5//9%3 or 'bye' < 'Bye')
print(5%10<8 and -25 > 1*8//5)
print(7**2//4+5 > 8 or 5!=6)
print(7/4<6 and 'I am fine' > 'I am not fine')
print(10+6*2**2!=9//4-3 and 29>=29/9)
print('hello' * 5 > 'hello' or 'bye' < 'Bye')

#5
print(15&22,'\n',15|22,'\n',-15&22,'\n',-15|22,'\n',~15,'\n',~22,'\n',~-20)
print(15^22)
print(8 << 3)
print(40>>3)

#7
marks = 45
print(marks>300 and marks<=400)

