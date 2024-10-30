def TwoSum(nums, target):
    pair_idx = {}

    for i, num in enumerate(nums):
        if target - num in pair_idx:
            return [i, pair_idx[target - num]]
        pair_idx[num] = i 

if __name__ == "__main__":
    nums= [2,7,11,15]
    target = 9
    result = TwoSum(nums, target)
    print(result)
