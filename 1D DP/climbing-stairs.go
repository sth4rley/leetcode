var slice[46]int

func climbStairs(n int) int {

    if slice[n] == 0 {
        if n <= 3 {
            slice[n] = n
        } else  {
            slice[n] = climbStairs(n-1)+climbStairs(n-2)
        }
    }
    
    return slice[n]
}