class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i in range(len(nums)):
            j = target - nums[i]
            if j in seen:
                return [seen[j], i]
            seen[nums[i]] = i #we add a value and its index

        