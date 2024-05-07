def dktamgiac(a,b,c):
    return a+b>c and b+c>a and a+c>b
def dientich(a,b,c):
    p=(a+b+c)/2
    return (p*(p-a)*(p-b)*(p-c))**0.5
def dttgmax(a,b,c,d):
    if a<=0 or b<=0 or c<=0 or d<=0:
        return -1
    ds=[(a,b,c),(a,b,d),(a,c,d),(b,c,d)]
    DTMax=-1
    for tg in ds:
        if dktamgiac(*tg):
            DTMax=max(DTMax,dientich(*tg))
    return round(DTMax,3)


a=int(input("Do dai A = "))
b=int(input("Do dai B = "))
c=int(input("Do dai C = "))
d=int(input("Do dai D = "))
print("Ket qua =",dttgmax(a, b, c, d))