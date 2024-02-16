// solucao 1 - usando map
func majorityElement(nums []int) int {
    mapa := make(map[int]int)

    for _, el := range nums {
        mapa[el]++
        if mapa[el]> (len(nums)/2) {
            return el
        }
    }
    
    return 0
}

// solucao 2 - sem usar map
func majorityElement(nums []int) int {

    counter := 0
    var candidate int

    for _, el := range nums {
        if counter == 0 {
            candidate = el
        }

        if el == candidate {
            counter++
        } else {
            counter--
        }
    }

    return candidate
}

// solucao ótima usando é quick select