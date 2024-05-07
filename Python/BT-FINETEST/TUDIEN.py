# Tạo từ điển giá của các loại trái cây
prices = {"banana": 4, "apple": 2, "orange": 1.5, "pear": 3}
# Tạo từ điển số lượng tồn của từng loại trái cây
stock = {"banana": 6, "orange": 32, "pear": 15, "apple": 0}
# Tính tổng giá trị của từng loại trái cây
value = {trai_cay: prices[trai_cay] * stock[trai_cay] for trai_cay in prices}

# Sắp xếp các loại trái cây theo tổng giá trị giảm dần
giamdan = sorted(value.items(), key=lambda x: x[1], reverse=True)
# In ra thứ tự các loại trái cây còn trong cửa hàng giảm dần theo tổng giá trị
print("Kết quả in ra thứ tự:")
for trai_cay, value in giamdan:
    print(f"{trai_cay} {value}")
