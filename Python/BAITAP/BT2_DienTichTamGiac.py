# Tính diện tích tam giác khi biết ba cạnh sd công thức Herong
from math import *


def area(a, b, c):
    p = (a + b + c) / 2
    return sqrt(p * (p - a) * (p - b) * (p - c))  # CT Herong


a = float(input("Nhap canh a:"))
b = float(input("Nhap canh b:"))
c = float(input("Nhap canh c:"))
if a <= 0 or b <= 0 or c <= 0 or (a + b) <= c or (a + c) <= b or (b + c) <= a:  # điều kiện ràng buộc
    print("So canh nhap vao khong hop le")
else:
    kq = area(a, b, c)  # trả về kết quả
    print("Dien tich tam giac:", kq)
