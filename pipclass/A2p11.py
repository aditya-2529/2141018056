#11
def cal(exp1,exp2,exp3):
    if exp2=='+':
        res = exp1+exp3
    elif exp2=='-':
        res = abs(exp1-exp3)
    elif exp2=='*':
        res = exp1*exp3
    elif exp2=='//':
        res = exp//exp3
    else:
        res = exp1/exp3

    print(res)

cal(2,'*',1)
