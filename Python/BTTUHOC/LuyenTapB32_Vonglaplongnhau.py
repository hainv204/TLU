# Ve chu N
n = int(input("Nhap chieu cao: "))
for i in range(n):
    for j in range(n):
        if j == 0 or i == j or j == n - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()
