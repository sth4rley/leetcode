class Solution: #TODO: usar start e end ao invés do inner
    def summaryRanges(self, nums: List[int]) -> List[str]:
        inner = []
        outer = []
        idx = 0
        
        while(idx < len(nums)):
            if len(inner) == 0:
                inner.append(nums[idx])
                idx += 1
            else:
                if len(inner) == 1:
                    if inner[0] + 1 == nums[idx]:
                        inner.append(nums[idx])
                        idx += 1
                    else:
                        outer.append("".join(map(str, inner)))
                        inner = []
                else:
                    if inner[1]+1 == nums[idx]:
                        inner[1] = nums[idx]
                        idx += 1
                    else:
                        outer.append("->".join(map(str, inner)))
                        inner = []
        
        if len(inner) > 0:
            outer.append("->".join(map(str, inner)))

        return outer