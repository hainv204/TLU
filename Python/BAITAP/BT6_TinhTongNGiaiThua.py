n = int(input("Nhap vao mot so nguyen duong N: "))
gt = 1
s = 0
for i in range(1, n + 1):
    gt *= i
    s += gt
print("F({0})={1}".format(n, s))
