# neu n chan thi cong don chan va nguoc lai
n = int(input("Nhap N: "))
s = 0
# neu n chan
if n % 2 == 0:
    for i in range(2, n + 1, 2):
        s = s + i
# neu n le
elif n % 2 != 0:
    for i in range(1, n + 1, 2):
        s = s + i
print("Tong s=", s)
