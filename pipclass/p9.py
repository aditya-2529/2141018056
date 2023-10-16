import math
#9a
a,b,c = 1,4,1
root1 = (-b + pow(pow(b,2)-4*a*c,0.5))/2*a
print(root1)

#9b
x,y = 10,1
result=((2*x*y-9*y)/(2*x*y**3))-((4*y*x**2)/(2*y))
print(result)

#9c
x,y,v = 1,2,14
result = 2*math.cos(0.5*(x+y))*math.cos(0.5*(x-y))+pow(math.e,x)-1-x/4+math.tan(x)-math.log(v)
print(result)
