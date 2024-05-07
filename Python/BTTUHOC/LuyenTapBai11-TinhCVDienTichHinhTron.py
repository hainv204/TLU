"""
Nhap vao mot ban kinh r.Tinh chu vi,dien tich duong tron tuong ung
chu vi=2*pi*r
dien tich=pi*r*r
"""
import math

try:
    r = float(input("Moi ban nhap ban kinh hinh tron:"))
    cv = 2 * math.pi * r
    dt = pow(r, 2) * math.pi
    print("Chu vi=", cv)
    print("Dien tich=", dt)
except:
    print("Ban nhap sai")
