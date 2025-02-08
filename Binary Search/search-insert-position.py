class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        ini = 0
        end = len(nums)-1
        while(ini<=end):
            midx = (end+ini)//2
            if target == nums[midx]:
                return midx
            if target > nums[midx]:
                ini = midx+1
            if target < nums[midx]:
                end = midx-1
        return ini