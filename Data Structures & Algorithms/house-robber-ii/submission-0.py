class Solution:
    def houseRobber(self, nums: List[int]) -> int:
        n = len(nums)
        memo = [None] * (n + 1)
        #dfs returns the max profit for first i houses
        #indices 0 to (i-1)
        def dfs(i) -> int:
            if memo[i] is not None:
                return memo[i]
            if i == 0:
                memo[0] = 0
                return memo[0]
            if i == 1:
                memo[1] = nums[0]
                return memo[1]
            if i == 2:
                memo[2] = max(nums[0], nums[1])
                return memo[2]

            memo[i] = max(nums[i - 1] + dfs(i - 2), 
                          dfs(i - 1))
            return memo[i]
        
        return dfs(n)


    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        return max(self.houseRobber(nums[1:]),
                    self.houseRobber(nums[:-1]))
