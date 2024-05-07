""" Viet chuong trinh nhap vao diem 3 mon Toan,Ly,Hoa cua mot hoc sinh.In ra diem trung binh cua hoc sinh do voi hai
so le thap phan"""
toan = float(input("Nhap diem toan: "))
li = float(input("Nhap diem li: "))
hoa = float(input("Nhap diem hoa: "))
dtb = (toan + li + hoa) / 3
print("Diem trung binh: ", dtb)
print("Diem trung binh: ", round(dtb,2))
