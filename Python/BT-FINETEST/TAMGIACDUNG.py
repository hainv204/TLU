a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))
if a > 0 and b > 0 and 0 < c < (a + b) and (a + c) > b and (b + c) > a:
    print("Dung la tam giac")
else:
    print("Khong phai tam giac")
