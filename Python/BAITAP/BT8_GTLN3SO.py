"""
Nhập vào 3 số a,b,c.
In ra màn hình GTLN trong 3 số
Nếu có ít nhất 2 số cùng GTLN thì xuất ra giá trị thứ 3
"""
a = float(input("Nhap so a: "))
b = float(input("Nhap so b: "))
c = float(input("Nhap so c: "))
if a == b:
    print(c)
elif a == c:
    print(b)
else:
    print(a)
print("Max 3 số:",max(a,b,c))