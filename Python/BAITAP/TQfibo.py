def fibo(n, k):
    if n >= 0 and n < k:
        return n
    else:
        s = 0
        for i in range(k, n + 1):
      #  for i in range(1, k + 1):
            s += fibo(n - i, k)
        return s


n = int(input("Nhap N:"))
k = int(input("Nhap k:"))
print(fibo(n, k))
