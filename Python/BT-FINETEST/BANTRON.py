def bantron(n, k):
    nums = list(range(1, n + 1))
    i = 0
    while len(nums) > 1:
        i = (i + k - 1) % len(nums)
        nums.pop(i)
    return nums[0]

n = int(input("So nguoi ngoi quanh ban: "))
k = 3
result = bantron(n, k)
print("Nguoi o lai cuoi cung la nguoi thu", result)
