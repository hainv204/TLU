A = []
B = []
C = []

N = int(input("Nhap N: "))

for i in range(N):
    value = input("Nhap gia tri thu {}: ".format(i + 1))
    if value.replace("-",'',1).isnumeric():
        A.append(int(value))
    elif "." in value:
        try:
            B.append(float(value))
        except:
            C.append(value)
    else:
        C.append(value)
A.sort(reverse=True)
B.sort(reverse=True)
C.sort(reverse=True)

print("A =", A)
print("B =", B)
print("C =", C)
