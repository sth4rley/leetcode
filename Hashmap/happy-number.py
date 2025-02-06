class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()
        while(n != 1):
            nstr = str(n)
            n = 0
            for x in nstr:
                n = n + int(x)**2
            if n in s:
                return False
            s.add(n)
        return True