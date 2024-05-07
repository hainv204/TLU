"""Nhap,xuat du ieu input() ngam dinh la kieu chuoi,py khong can khai bao kieu du lieu"""
print("Moi ban nhap gia tri")
s = input()
print("Ban vua nhap la : ", s)
print(type(s))
'''ep ra kieu int'''
print("Moi ban nhap gia tri")
s = int(input())
print("Ban vua nhap la : ", s)
print(type(s))
'''nhap lieu kieu bool'''


def strtobool(a):
    return a.lower() in ("true", "t", "1", "yes")


x = input("Moi ban nhap True and Fasle:")
x = strtobool(x)
print(x)
