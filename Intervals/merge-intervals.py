class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        sl = sorted(intervals, key=lambda x: x[0])

        idx = 0

        while(idx < len(sl)-1):
            # overlap
            if sl[idx][1] >= sl[idx+1][0] or sl[idx+1][0] <= sl[idx][1]:
                sl[idx+1][0] = min(sl[idx][0], sl[idx+1][0])
                sl[idx+1][1] = max(sl[idx][1], sl[idx+1][1])
                del sl[idx]
            else:
                idx += 1

        return sl