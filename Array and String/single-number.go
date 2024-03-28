func singleNumber(nums []int) int {
    m := make(map[int]int)

    for _, n := range nums {
        m[n]++
    }

    for c,v := range m {
        if v == 1 {
            return c
        }
    }

    return -1

}