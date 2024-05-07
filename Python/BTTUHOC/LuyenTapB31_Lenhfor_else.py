n = int(input("Nhap so nguyen N: "))
s = 0
for i in range(5, 10):
    if 4 % n == 1:
        print("Ngung for")
        break
    s += i
else:
    print("S=", s)
