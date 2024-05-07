a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))

x = [a, b, c]
sapxep = sorted(set(x))

output = "Xep tang dan:"
for i in sapxep:
    output += " " + str(i)

output = output.rstrip()  # Loại bỏ khoảng trắng cuối cùng
print(output)
