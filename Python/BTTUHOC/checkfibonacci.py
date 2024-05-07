def Fibo(N):
    if N <= 2:
        return 1
    else:
        return Fibo(N - 1) + Fibo(N - 2)


def isFibo(N):
    for i in range(1, N + 1):
        if N == Fibo(i):
            return 1


N = int(input('Nhập vào số N: '))
if isFibo(N) or N == 1 or N == 2 or N == 3:
    print(N, 'là số fibonaci')
else:
    print(N, 'không phải là số fibonaci')
