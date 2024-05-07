from math import sqrt
def area(a,b,c):
    if a<=0 or b<=0 or c<=0 or a+b<=c or b+c<=a or a+c<=b:
       return "3 canh nhap vao khong hop le"
   #Tinh S tam giac
    p=(a+b+c)/2
    s=sqrt(p*(p-a)*(p-b)*(p-c))
    return s


a=int(input("Nhap a: "))
b=int(input("Nhap b: "))
c=int(input("Nhap c: "))
print("Ket qua:",area(a, b, c))
