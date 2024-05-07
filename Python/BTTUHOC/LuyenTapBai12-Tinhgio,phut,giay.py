"""Bai toan:
Nhap vao so giay bat ki t.Tinh va xuat ra dang gio:phut:giay
vi du: Nhap 3750 thi xuat ra 1:2:30 AM
Nhap 51100 thi xuat ra 2:11:40 PM
HD:
hour=(t/3600)%24
minute=(t%3600)/60
second=(t%3600)%60
"""
t = int(input("Nhap so giay = "))
hour = (t // 3600) % 24
minute = (t % 3600) // 60
second = (t % 3600) % 60
print(hour, ":", minute, ":", second)
