/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

 func NewNode(value int) * TreeNode {
    return &TreeNode{
        Val: value,
        Left: nil,
        Right: nil,
    }
}

func Insert (n *TreeNode,value int) {
    if value < n.Val {
        
        if(n.Left == nil) {
            n.Left = NewNode(value)
        } else {
            Insert(n.Left, value)
        }

    } else {

        if(n.Right == nil) {
            n.Right = NewNode(value)
        } else {
            Insert(n.Right,value)
        }

    }
}

func sortedArrayToBST(nums []int) *TreeNode {

    if len(nums) == 0 {
        return nil
    }

    mid := len(nums) / 2
    root := NewNode(nums[mid])

    root.Left = sortedArrayToBST(nums[:mid])
    root.Right = sortedArrayToBST(nums[mid+1:])

    return root
	
}