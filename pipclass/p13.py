#13
import math
d = float(input("Enter the height: "))
a = 9.8
vi = 0
print(f'The final speed with heigth {d}m, acceleration {a}m/s^2 and initial speed {vi}m/s is: ',math.pow(math.pow(vi,2)+2*a*d),0.5),'m/s')
