n = int(input("Nhap N: "))
A = []
B = []
for i in range(n):
    value = input("Nhap gia tri thu {}: ".format(i + 1))
    try:
        value = float(value)
        A.append(value)
    except:
        B.append(value)
if sum(A)!=0:
    print("TBC cua A =",sum(A)/len(A))
print("B =", B)
