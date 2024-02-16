// solucao 1
func isPalindrome(s string) bool {

    isAlpha := func (r rune) bool {
        return unicode.IsLetter(rune(r)) || unicode.IsDigit(rune(r))
    }

    i := 0
    j := len(s)-1

    for i<j {

        for i<len(s) && !isAlpha(rune(s[i])) {
            i++  
        } 
        
        for j>=0 && !isAlpha(rune(s[j])) {
            j--
        }

        if i < len(s) && j >= 0 {
            left := unicode.ToUpper(rune(s[i]))
            right := unicode.ToUpper(rune(s[j]))

            if right != left {
                return false
            }
        }


        i++
        j--
    }

    return true

}

// solucao 2
func isPalindrome(s string) bool {
    var newS string

    for _, char := range s {
        if unicode.IsLetter(char) || unicode.IsDigit(char) {
            newS += string(unicode.ToUpper(char))
        }
        
    }

    fmt.Println(newS)

    i := 0
    j := len(newS)-1

    for i<j {
        if newS[i] != newS[j] {
            return false
        }
        i++
        j--
    }

    return true


}