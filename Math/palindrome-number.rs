impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        let mut s:String = format!("{}",x);
        let mut r:String = s.chars().rev().collect();
        if s == r {
            return true;
        }
        return false;
    }
}