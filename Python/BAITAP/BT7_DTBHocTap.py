# Viết chương trinh nhập điểm trung bình và đánh giá theo quy tắc
n = float(input("Diem trung binh: "))
if n <= 10:
    print("Xep loai xuat sac")
elif 8 <= n <= 9:
    print("Xep loai gioi")
elif 6.5 <= n < 8:
    print("Xep loai kha")
elif 5 <= n < 6.5:
    print("Xep loai trung binh")
elif 3.5 <= n < 5:
    print("Xep loai kem")
else:
    print("Xep loai yeu")
