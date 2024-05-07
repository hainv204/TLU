# nam nhuan la nam chia het cho 4 nhưng khong chia het chp 100 or chia het cho 400
a = int(input("Nhap nam: "))
# Viet sd if else như phep gan
print("Nam", a, "la nam nhuan" if (a % 4 == 0 and a % 100 != 0) or (a % 400 == 0) else "khong phai nam nhuan")
# Thong thuong
if (a % 4 == 0 and a % 100 != 0) or (a % 400 == 0):
    print("Nam", a, "la nam nhuan")
else:
    print("Nam", a, "khong phai nam nhuan")