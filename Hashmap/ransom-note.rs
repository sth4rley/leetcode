use std::collections::HashMap;

impl Solution {
    pub fn can_construct(ransom_note: String, magazine: String) -> bool {

        let mut mapa: HashMap<char, usize> = HashMap::new();

        for caractere in magazine.chars(){
            *mapa.entry(caractere).or_insert(0) += 1;
        }

        for caractere in ransom_note.chars() {
            let contador = mapa.entry(caractere).or_insert(0);
            if *contador == 0 { 
                return false; // nao há caracteres suficientes
            }
            *contador -= 1;
            
        }

        return true;
    }
}