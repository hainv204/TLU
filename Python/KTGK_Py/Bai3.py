n=int(input("Nhap N: "))
A=[]
B=[]
for i in range(n):
    value=input("Nhap gia tri thu {}: ".format(i+1))
    try:
       value=float(value)
       A.append(value)
    except:
        B.append(value)
B.sort(reverse=True)
print("Tong cac phan tu cua A =",sum(A))
print("B =",B)