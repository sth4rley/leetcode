class MinStack:

    def __init__(self):
        self.s = []
        self.mini = []

    def push(self, val: int) -> None:
        self.s.append(val)
        if len(self.mini) == 0 or val <= self.mini[-1]:
            self.mini.append(val)

    def pop(self) -> None:
        if self.mini[-1] == self.s[-1]:
            del self.mini[-1]
        del self.s[-1]

    def top(self) -> int:
        return self.s[-1]

    def getMin(self) -> int:
        return self.mini[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()