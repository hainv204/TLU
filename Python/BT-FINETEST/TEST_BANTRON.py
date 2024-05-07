def find_last_person(n, k):
    index = 0
    for i in range(1, n + 1):
        index = (index + k) % i
    return index + 1


n = int(input("So nguoi ngoi quanh ban: "))
k = 3
result = find_last_person(n, k)
print("Nguoi o lai cuoi cung la nguoi thu", result)
