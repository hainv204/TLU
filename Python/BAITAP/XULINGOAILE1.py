def tinhtong(n):
    s,t=0,1
    for i in range(1,n+1):
        t*=i
        if i%2==1:
            s+=t
        if i%2==0:
            s+=(-1)*t
    return s

try:
    n=int(input("Nhap n = "))
    print("Tong S =",tinhtong(n))
except:
    print("Nhap sai! Dung chuong trinh!")