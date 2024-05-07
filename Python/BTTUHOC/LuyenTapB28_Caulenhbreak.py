while True:
    n = int(input("Nhap N:"))
    print(n, "la so chan" if n % 2 == 0 else "la so le")
    h = input("Ban co muon tiep tuc khong(c/k):")
    if h == "k":
        break
print("BYE!Hen gap lai")
