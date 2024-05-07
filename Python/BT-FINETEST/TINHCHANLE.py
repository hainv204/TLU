a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))

if (a % 2 == 0 and b % 2 == 0 and c % 2 == 0) or (a % 2 != 0 and b % 2 != 0 and c % 2 != 0):
    print("Cung tinh chan le")
else:
    print("Khac tinh chan le")
