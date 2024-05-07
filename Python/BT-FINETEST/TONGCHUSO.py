n = int(input("N = "))
temp = 2 ** n
sd = 0
s = 0
if n == 0:
    print("Tong = 1")
else:
    while temp>0:
        sd = temp % 10
        temp //= 10
        s += sd
print("Tong =", s)
# TH input n lon 800000 ->kiem tra lai thuat toan
