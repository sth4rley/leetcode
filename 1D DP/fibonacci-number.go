var memo[31]int

func fib(n int) int {
    if n <= 1 {
        return n
    }
    if memo[n] == 0 {
        memo[n] = fib(n-1) + fib(n-2)
    }
    return memo[n]
}