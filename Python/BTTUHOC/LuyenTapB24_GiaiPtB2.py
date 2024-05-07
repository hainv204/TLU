# Giai pt bac 2 : ax^2 + bx +c = 0
# ctrl+D: copy
import math

a = float(input("Nhap a: "))
b = float(input("Nhap b: "))
c = float(input("Nhap c: "))
if a == 0:
    # bx+c=0
    if b == 0 and c == 0:
        print("Phuong trinh co vo so nghiem")
    elif b == 0 and c != 0:
        print("Phuong trinh vo nghiem")
    else:
        x = -c / b
        print("Phuong trinh co mot nghiem x= ", x)
else:  # a!=0
    denta = b * b - 4 * a * c
    if denta < 0:
        print("Phuong trinh vo nghiem")
    elif denta == 0:
        x = -b / (2 * a)
        print("Phuong trinh co nghiem kep x= ", x)
    else:
        x1 = (-b + math.sqrt(denta)) / (2 * a)
        x2 = (-b - math.sqrt(denta)) / (2 * a)
        print("Phuong trinh co hai nghiem phan biet:")
        print("x1= ", x1)
        print("x2= ", x2)
