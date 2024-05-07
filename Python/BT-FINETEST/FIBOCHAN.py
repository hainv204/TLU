n = int(input("N = "))
a, b = 0, 1
while b < n:
    a, b = b, a + b
if b == n and b % 2 == 0:
    print("N la so fibonacci chan")
else:
    print("N khong phai la so fibonacci chan")
