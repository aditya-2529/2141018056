#7
def areaTriangle(side1,side2,side3):
    s = (side1+side2+side3)
    return pow(s*(s-side1)*(s-side2)*(s-side3),0.5)

def main():
    side1 = float(input("Enter the side1: "))
    side2 = float(input("Enter the side2: "))
    side3 = float(input("Enter the side3: "))
    if side3 <= side1 + side2:
        print("Area of the triangle: ",areaTriangle(side1,side2,side3))
    elif side2 <= side1 + side3:
        print("Area of the triangle: ",areaTriangle(side1,side2,side3))
    elif side1 <= side3 + side2:
        print("Area of the triangle: ",areaTriangle(side1,side2,side3))
    else:
        print("Not possible")

if __name__ == '__main__':
    main()
