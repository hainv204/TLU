x = -1
while x < 1 or x > 10:
    x = int(input("Nhap 1..10: "))
print(x ** 2)
# Cong day so S=1+2+3+4+...+n
n = int(input("Nhap N: "))
s = 0
i = 1
while i <= n:
    s += i
    i = i + 1
print("Tong S=", s)
