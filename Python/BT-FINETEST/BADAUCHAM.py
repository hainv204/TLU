s = input("Nhap chuoi: ")
while not s.endswith("!!!"):  # Kiem tra dieu kien neu chua du !!! thi cong tiep vao chuoi den khi du
    s += "!"
print("Chuoi sau khi bo sung dau cham than: '{}'".format(s))
