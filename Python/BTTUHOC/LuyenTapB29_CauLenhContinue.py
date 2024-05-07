n = int(input("N= "))
s = 0
i = 0
for i in range(1, n + 1, 2):
    if i == 3 or i == 11:
        continue
    s = s + i
print("S=", s)
