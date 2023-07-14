class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = 0
        for i in range(len(accounts)):
            total = sum(accounts[i])
            res = max(res, total)
        return res 

