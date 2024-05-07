# Khởi tạo danh sách A, B, C
A = []
B = []
C = []

# Nhập N
N = int(input("Nhap N: "))

# Nhập N giá trị và thêm vào các danh sách tương ứng
for i in range(N):
    value = input("Nhap gia tri thu {}: ".format(i + 1))
    try:
        value = int(value)  # Chuyển đổi thành kiểu nguyên
        A.append(value)
    except:
        try:
            value = float(value)  # Chuyển đổi thành kiểu thực
            B.append(value)
        except:
            C.append(value)

# Sắp xếp các danh sách theo thứ tự giảm dần
A.sort(reverse=True)
B.sort(reverse=True)
C.sort(reverse=True)

# In ra màn hình ba danh sách đã sắp xếp
print("A =", A)
print("B =", B)
print("C =", C)
