def dktamgiac(a,b,c):
    return a+b>c and b+c>a and a+c>b
def dientich(a,b,c):
    p=(a+b+c)/2
    return (p*(p-a)*(p-b)*(p-c))**0.5
def dttg(a,b,c,d):
    if a<=0 or b<=0 or c<=0 or d<=0:
        return -1
    s=0
    ds=[(a,b,c),(a,b,d),(a,c,d),(b,c,d)]
    for tg in ds:
        if dktamgiac(*tg):
            s+=dientich(*tg)
    return s

a=float(input("Do dai A = "))
b=float(input("Do dai B = "))
c=float(input("Do dai C = "))
d=float(input("Do dai D = "))
print("Ket qua = %.5f"%(dttg(a, b, c, d)))