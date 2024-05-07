while True:
    n = int(input("Nhap mot so nguyen duong: "))
    dem = 0
    for i in range(1, n + 1):
        if n % i == 0:
            dem += 1
    if dem == 2:
        print(n, "la so nguyen to")
    else:
        print(n, "khong phai la so nguyen to")
    print("Ban co muon tiep tuc khong(c/k)?:")
    if input() == "k":
        exit()
print("BYE!")
