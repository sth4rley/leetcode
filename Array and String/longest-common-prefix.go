type Node struct {
    Children map[rune] * Node
    IsEnd bool
}

func NewTrieNode () * Node {
    return &Node{
        Children: make(map[rune]*Node),
        IsEnd: false,
    }
}

func (t *Node) Insert (word string) {
    node := t
    for _, char := range word {
        if _, ok := node.Children[char]; !ok {
            node.Children[char] = NewTrieNode()
        }
        node = node.Children[char]
    }
    node.IsEnd = true
}

func longestCommonPrefix(strs []string) string {

    if len(strs) == 0 {
        return ""
    }

    root := NewTrieNode()
    for _, str := range strs {
        root.Insert(str)
    }

    sol := ""
    node := root
    
    for len(node.Children) <= 1 && !node.IsEnd {
        for key, value := range node.Children {
                sol += string(key)
                node = value
        }
    }

    return sol
}