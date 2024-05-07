def TongNGT(n):
    gt=1
    s=0
    for i in range(1,n+1):
        gt*=i
        s+=gt
    return s

n=int(input("Nhap N = "))
print("Tong {}! = {}".format(n, TongNGT(n)))