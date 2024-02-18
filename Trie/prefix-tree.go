type Trie struct {
    Children map[rune]*Trie
    IsEnd bool
}

func Constructor() Trie {
    return Trie {
        Children: make(map[rune]*Trie),
        IsEnd: false,
    }
}

func (this *Trie) Insert(word string)  {
    node := this
    for _, char := range word {
        if _, ok := node.Children[char]; !ok {
            newNode := Constructor()
            node.Children[char] = &newNode
        }
        node = node.Children[char]
    }
    node.IsEnd = true
}

func (this *Trie) Search(word string) bool {
    node := this
    for _, char := range word {
        if _, ok := node.Children[char]; !ok {
            return false
        }
        node = node.Children[char]
    }
    if node.IsEnd {
        return true
    }
    return false
}


func (this *Trie) StartsWith(prefix string) bool {
    node := this
    for _, char := range prefix {
        if _, ok := node.Children[char]; !ok {
            return false
        }
        node = node.Children[char]
    }
    return true
}


/**
 * Your Trie object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Insert(word);
 * param_2 := obj.Search(word);
 * param_3 := obj.StartsWith(prefix);
 */