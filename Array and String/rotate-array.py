class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        nk = k%len(nums)
        nums[:] = nums[-nk:]+nums[:-nk] 