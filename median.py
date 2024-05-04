n = int(input())
nums = input().split(" ")
nums = [int(num) for num in nums]
nums.sort()

if n % 2 == 0:
    print((nums[n // 2] + nums[n // 2 - 1]) / 2)
else:
    print(float(nums[n // 2]))

# m = np.median(nums)

# if np.isclose(m, int(m)):
#     print(int(m))
# else:
#     print(m)
