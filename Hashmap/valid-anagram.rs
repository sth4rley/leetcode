use std::collections::HashMap;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut mapa: HashMap<char, u16> = HashMap::new();

        for ch in s.chars() {
            *mapa.entry(ch).or_insert(0) += 1;
        }

        for ch in t.chars() {
            *mapa.entry(ch).or_insert(0) -= 1;
        }

        for &valor in mapa.values() {
            if valor != 0 {
                return false;
            }
        }

        return true;

        
    }
}