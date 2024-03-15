
func tribonacci(n int) int {

    var memo[38]int

    memo[0] = 0
    memo[1] = 1
    memo[2] = 1
    
    for i := 3; i<=n; i++ {
        memo[i] = memo[i-1] + memo[i-2] + memo[i-3]
    }

    return memo[n]
}