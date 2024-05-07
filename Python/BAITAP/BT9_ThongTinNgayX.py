"""
Nhập vào bàn phím thông tin về ngày X,bằng cách nhập 3 số nguyên dương d,m,y
lần lượt là giá trị ngày/ tháng / năm của X.Tính và in ra ngày tiếp sau của X
Ví dụ nhập 31/1/2019 thì in ra 1/2/2019
"""


def songay(m, y):
    if m == 4 or m == 6 or m == 9 or m == 11:
        return 30
    elif m == 2:
        if y % 400 == 0 or (y % 4 == 0 and y % 100 != 0):
            return 29
        else:
            return 28
    else:
        return 31


def NgayKeTiep(d, m, y):
    ngay_trong_thang = songay(m, y)

    if d < 1 or d > ngay_trong_thang or m < 1 or m > 12 or y < 1:
        return "Ngày không hợp lệ."

    if d == ngay_trong_thang:
        if m == 12:
            d = 1
            m = 1
            y += 1
        else:
            d = 1
            m += 1
    else:
        d += 1

    return "{0}/{1}/{2}".format(d, m, y)


# Nhập thông tin về ngày X từ bàn phím
d = int(input("Nhập ngày: "))
m = int(input("Nhập tháng: "))
y = int(input("Nhập năm: "))
print("Ngày tiếp theo: ", NgayKeTiep(d, m, y))
