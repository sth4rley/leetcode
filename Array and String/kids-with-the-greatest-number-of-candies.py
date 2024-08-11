class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxc = max(candies)
        return [c+extraCandies >= maxc for c in candies]