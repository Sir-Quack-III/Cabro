pub fn load() {
    // loads code from file
}

pub fn lex(inp: String) {
    let DIGITS = "0123456789";
    let mut length = 0;

    let mut current_char = String::new();
    let mut idx: i32 = -1;

    for i in 0..inp.chars().count() {
        length += 1;
        current_char = inp.chars()
                        .nth(i)
                        .unwrap()
                        .to_string();

        if " \t".contains(&current_char) {

        }
        if DIGITS.contains(&current_char) {
            println!("number");
        } else {
            println!("smthn else");
        }
    }
}