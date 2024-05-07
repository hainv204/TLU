# Nhap hai so nguyen a va b.Tinh va in ra can can(a)^b
from math import pow

a=int(input("Nhap so nguyen a: "))
b=int(input("Nhap so nguyen b: "))
# 1 sd ** luy thua de tinh,2 sd ham pow
print("Ket qua 1:",a**(1/b))
print("Ket qua 2:",pow(a,b))