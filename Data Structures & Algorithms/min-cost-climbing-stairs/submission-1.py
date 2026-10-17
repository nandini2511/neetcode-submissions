class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        memo = [None] * (n + 1)

        #dfs(i) -> min cost required to reach ith position
        #ith position is the index beyond i
        def dfs(i) -> int:
            if memo[i] is not None:
                return memo[i]
            if i == 0:
                memo[0] = 0
                return memo[0]
            if i == 1:
                memo[1] = 0
                return memo[1]

            memo[i] = min(cost[i - 1] + dfs(i - 1), cost[i - 2] + dfs(i - 2))
            return memo[i]

        return dfs(n)
        