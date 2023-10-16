#14
a = int(input("Enter the four digit number: "))
x = a//1000
x1 = (a-x*1000)//100
x2 = (a-x*1000-x1*100)//10
x3 = (a-x*1000-x1*100-x2*10)
print(f'The sum of {x}+{x1}+{x2}+{x3} is: ',x+x1+x2+x3)
