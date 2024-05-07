from math import sqrt

N = int(input("N = "))
s = 0
sqrt_N = int(sqrt(N))
for i in range(1, sqrt_N + 1):
    if N % i == 0:
        s += i
        if i != N // i:  # kiểm tra xem i có phải là ước số duy nhất của N hay không=>i!=N//i thi i se la uoc duy
            s += N // i  # nhat cua N

print("Tong cac uoc so cua {} la {}".format(N, s))
