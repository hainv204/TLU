n=int(input("N = "))
A=[]
B=[]
for i in range(1,n+1):
    value=input("Nhap gia tri thu {}: ".format(i))
    try:
        value=float(value)
        A.append(value)
    except:
        B.append(value)
print("Tong cac phan tu cua A =",sum(A))
print("B =",'-'.join(B))    