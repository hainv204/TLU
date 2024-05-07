# Giai ptb1 ax+b=0
def PTB1(a, b):
    if a == 0 and b == 0:  # a=0
        return "Phuong trinh vo so nghiem"
    elif a == 0 and b != 0:
        return "Phuong trinh vo nghiem"
    else:  # a!=0
        return "Phuong trinh co mot nghiem x={0}".format(-b / a, 2)


a = int(input("Nhap a:"))
b = int(input("Nhap b:"))
kq = PTB1(a, b)
print(kq)


# ham xuat du lieu khong tra ve ket qua
def xuatdulieu(data):
    print(data)
p = xuatdulieu(kq)
print(p)  # khong co ket qua tra ve