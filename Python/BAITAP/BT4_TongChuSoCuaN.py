# Tính tổng các chữ số trong N
def total(n):
    s = 0
    while n > 0:
        sd = n % 10
        n = n // 10
        s += sd
    return s


n = int(input("Nhap N:"))
kq = total(n)
print("Tong cac chu so trong N la:", kq)
