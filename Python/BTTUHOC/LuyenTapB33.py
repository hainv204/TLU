# Tinh S(x,n)= x + 2^2/2! + 2^3/3! + ... + x^n/n!
x = int(input("Nhap x: "))
n = int(input("Nhap N: "))
s = 0
for i in range(1, n + 1):
    tu = x ** i
    mau = 1
    for j in range(1, i + 1):
        mau = mau * j
    s += (tu / mau)
print("S({0},{1})={2}".format(x, n, s))
