n = int(input("N = "))
s = 0
t = 0
for i in range(1, n + 1):
    t += i * i
    s += n / t
print("F(%d) = %.7f" % (n, s))
