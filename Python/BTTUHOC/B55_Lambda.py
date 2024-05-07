my_list = [1, 2, 3, 4, 5]


def binh_phuong(number):
    return number * number


result = map(binh_phuong, my_list)
print(list(result))
