#14
def upperCase(a):
        return a.upper()

def main():
    in_str = input("Enter the string: ")
    assert in_str.islower()
    if in_str.islower():
        a = upperCase(in_str)
    print(a)

if __name__ == '__main__':
    main()
