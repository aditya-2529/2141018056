#10
def digit(a):
    t = a//1000
    a = a%1000
    t1 = a//100
    a = a%100
    t2 = a//10
    a = a%10
    t3 = a
    su = (t*(1-(t%2))+t1*(1-(t1%2))+t2*(1-(t2%2))+t3*(1-(t3%2)))
    print(f'Sum is: {su}')
digit(5454)
