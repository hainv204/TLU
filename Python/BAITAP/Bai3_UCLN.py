def UCLN(a,b):
    if b==0:
        return a
    return UCLN(b,a%b)

def BCNN(a,b):
    return a*b/UCLN(a, b)
a=int(input("Nhap a: "))
b=int(input("Nhap b: "))
print("UCLN({},{})= {}".format(a,b,UCLN(a, b)))
print("BCNN({},{})= {}".format(a,b,BCNN(a, b)))