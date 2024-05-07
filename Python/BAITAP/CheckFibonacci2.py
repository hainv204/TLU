def isFibo(n):
    if n == 0 or n == 1:
        return 1
    if n >= 2:
        fn = 0
        f1 = f2 = 1
        while fn < n:
            fn = f1 + f2
            f1 = f2
            f2 = fn
    if fn == n:
        return 1
    else:
        return 0


n = int(input("Nhap so N: "))
if isFibo(n) == 1:
    print(n, " la so Fibonacci")
else:
    print(n, " khong phai la so Fibonacci")
