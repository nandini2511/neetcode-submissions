class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        """
        #counting sort
        count = [0] * 3
        
        for num in nums:
            count[num] += 1

        index = 0
        for i in range(3):
            #till count[i] > 0
            while count[i]:
                count[i] -= 1
                nums[index] = i
                index += 1
        """

        def swap(i, j):
            nums[i], nums[j] = nums[j], nums[i]

        #Dutch National Flag (DNF) Algorithm
        left, right = 0, len(nums) - 1
        i = 0

        while i <= right:
            if nums[i] == 0:
                swap(i, left)
                left += 1
            elif nums[i] == 2:
                swap(i, right)
                right -= 1
                i -= 1
            i += 1




        



        