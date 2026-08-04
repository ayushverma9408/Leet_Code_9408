class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums.sort() ;  a = []
        for x, y in pairwise(nums): a.extend(range(x + 1, y))
        return a