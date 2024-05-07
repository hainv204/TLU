def change_coin(N, M, coins):
    # Base cases
    if N == 0:
        return 1
    if N < 0 or M == 0:
        return 0

    count = 0
    for i in range(M):
        # Gọi đệ quy để tính số cách đổi tiền cho giá trị N - coins[i]
        count += change_coin(N-coins[i], M, coins)

    return count

# Nhập giá trị của N và M từ người dùng
N = int(input("N = "))
M = int(input("M = "))
coins = [5000, 2000, 1000, 500, 200]
result = change_coin(N, M, coins)
print("Co", result, "phuong an doi tien")