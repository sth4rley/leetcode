func isAnagram(s string, t string) bool {

    if len(s)!=len(t) {
        return false
    }

    mapa := make(map[rune]int)

    for _, chr := range t {
        mapa[chr]++
    }

    for _, chr := range s {
        mapa[chr]--
        if mapa[chr] < 0 {
            return false
        }
    }

    for _, qnt := range mapa {
        if qnt != 0 {
            return false
        }
    }

    return true
}