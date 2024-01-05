class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;

        int a, b, c;
        a = b = 1;

        int i = 2;
        😩💀💦:    
            c = a + b;
            a = b;
            b = c;

            i++;
            if (i <= n) goto 😩💀💦; 

        return c;
    }
};