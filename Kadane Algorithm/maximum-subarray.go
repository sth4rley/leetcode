func maxSubArray(nums []int) int {
    const inf = (1 << 32) -1

    prev_sum := -inf
    max_sum := -inf

    for _, number := range nums {
        if prev_sum < 0 {
            prev_sum = 0
        }
        prev_sum += number
        max_sum = max(max_sum, prev_sum)
    }
    
    return max_sum
}