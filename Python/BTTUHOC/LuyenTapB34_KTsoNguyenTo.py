n = int(input("Nhap mot so nguyen duong: "))
dem = 0
for i in range(1, n + 1):
    if n % i == 0:
        dem += 1
if dem == 2:  # chi co hai uoc so chia het cho 1 va chinh no
    print(n, "la so nguyen to")
else:
    print(n, "khong phai la so nguyen to")
