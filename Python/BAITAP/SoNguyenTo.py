def isprime(n):
    dem = 0
    for i in range(1, n + 1):
        if n % i == 0:
            dem += 1
    if dem == 2:
        return True
    else:
        return False


n = int(input("Nhap N: "))
print(isprime(n))
