func findDifference(nums1 []int, nums2 []int) [][]int {

    ans := [][]int {{},{}}

    m := make(map[int]int)

    for _, num := range nums1 {
        m[num] = 1
    }

    for _, num := range nums2 {
        if m[num] == 0 {
            ans[1] = append(ans[1], num)
        } 
        m[num] = -1
    }

    for c,v := range m {
        if v > 0 {
            ans[0] = append(ans[0], c)
        }
    }

    return ans
}