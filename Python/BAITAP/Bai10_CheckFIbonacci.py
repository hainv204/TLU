#Kiem tra xem N co phai la so Fibonacci hay khong
n=int(input("Nhap so nguyen duong N: "))
a,b=0,1
while b!=n:
    if b>n:#vuot qua n thi dung
        break
    a,b=b,a+b
print("Fibonacci" if b==n else "No Fibonacci")
    