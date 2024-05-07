count = sum = 0
print("Nhap 5 so lon hon hoac bang 0 de tinh trung binh")
while count < 5:
    val = int(input("Nhap gia tri: "))
    if val < 0:
        print("Nhap gia tri khong hop le")
        break
    sum += val
    count += 1
else:
    print("Trung binh: ", sum / count)
