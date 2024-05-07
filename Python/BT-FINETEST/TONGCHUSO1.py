import sys
sys.set_int_max_str_digits(1000000)
n = int(input("N = "))
temp = 2 ** n
temp = str(temp)
s=0
for i in temp:
    s+=int(i)
print("Tong =", s)