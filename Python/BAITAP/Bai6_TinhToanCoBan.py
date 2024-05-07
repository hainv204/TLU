import math
x=int(input("Nhap so nguyen x: "))
len=math.floor(math.log10(x))
print("So chu so cua x:",len+1)
print("Chu so dau cua x:",x//10**len)