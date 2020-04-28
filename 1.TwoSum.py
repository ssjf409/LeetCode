class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # for i in range(len(nums) - 1):
        #     for j in range(i + 1, len(nums)):
        #         if target == nums[i] + nums[j]:
        #             return [i, j];
        # return [];
        m = {}
        for idx, num in enumerate(nums):
            if target-num in m:
                return [m[target-num], idx]
            m[num] = idx