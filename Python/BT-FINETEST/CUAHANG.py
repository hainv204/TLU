def nhap(TB1, TB2, Title):
    print(Title)
    dic = {}
    while 1:
        temp = input("  " + TB1)
        if len(temp) == 0: break
        dic[temp] = float(input("  " + TB2))
    return dic


a = nhap("Ten mat hang: ", "Gia ban hang: ", "NHAP BANG GIA:")
b = nhap("Ten mat hang: ", "So luong ton kho: ", "NHAP HANG TON:")
c = sorted([[i, a[i] * b[i] if i in b else 0.0, 0] for i in a])
for i in range(len(c)):
    c[i][2] = -i
c.sort(key=lambda x: [x[1], x[2]], reverse=True)
print("THONG KE HANG TON:")
for i in c:
    print("  " + i[0].ljust(len(max(c, key=lambda a: len(a[0]))[0])) + " " + f"{i[1]:.2f}".rjust(6))
