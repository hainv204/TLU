def TongN(n):
    sd=0
    s=0
    while n>0:
        sd=n%10
        n//=10
        s+=sd
    return s

n=int(input("Nhap N = "))
print("Tong cac chu so trong N:",TongN(n))