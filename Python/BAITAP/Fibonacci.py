# Tinh day fibonacci: 0,1,1,2,3,5,8,13...
def Fibo(n):
    fn = int
    i = 3
    f1 = f2 = 1
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return 1
    while i <= n:
        fn = f1 + f2
        f1 = f2
        f2 = fn
        i += 1
    return fn


n = int(input("Nhap N = "))
kq = Fibo(n)
print("F({0})={1}".format(n, kq))


# sd đệ quy
def Fib(x):
    if x <= 2:
        return 1
    else:
        return Fib(x - 1) + Fib(x - 2)


x = int(input("Nhap gia tri N:"))
result = Fib(x)
print("F({0})={1}".format(x, result))
