from math import sqrt

s = 0
t = 0
n = int(input("N = "))
for i in range(1, n + 1):
    t += i
    s += sqrt(t)
print("F(%d) = %.7f" % (n, s))