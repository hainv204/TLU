n = int(input("Nhap N duong: "))
s = 0
gt = 1
for i in range(1, n + 1):
    gt *= i
    s += gt
print("F({}) = {}".format(n, s))
