from math import sqrt

a=float(input("Nhap a: "))
b=float(input("Nhap b: "))
c=float(input("Nhap c: "))
delta=b*b-4*a*c

if a==0:
    if b==0:
        print("Phuong trinh vo so nghiem")
    else:
        x=-c/b
        print("Phuong trinh co mot nghiem x= ",x)
else:
    if delta>0:
        x1=(-b+sqrt(delta))/2*a
        x2=(-b-sqrt(delta))/2*a
        print("Phuong trinh co hai nghiem phan biet:\n x1 = {}\n x2 = {}".format(x1,x2))
    elif delta==0:
        x=-b/2*a
        print("Phuong trinh co hai nghiem kep x1,x2 = ",x)
    else:
        print("Phuong trinh vo nghiem")