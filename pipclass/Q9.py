import sys
def eve(a,b):
    if a%2==0 or b%2==0:
        print('true')
    else:
        print('false')
eve(int(sys.argv[1]),int(sys.argv[2]))
#eve(1,2)
