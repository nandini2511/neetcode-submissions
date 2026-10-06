class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set()
        longest = 0

        for i in range(len(nums)):
            numSet.add(nums[i])

        for num in numSet:
            if num - 1 not in numSet:
                length = 1
                while (num + length) in numSet:
                    length += 1
                longest = max(length, longest)
        
        return longest



        