mod lexer;

use std::io;
use std::io::Write;

fn main() {
    println!("lexer test");
    loop {
        let mut inp = String::new();

        print!("CABRO BOO YA >>>");
        io::stdout().flush().unwrap();

        io::stdin()
            .read_line(&mut inp)
            .expect("error");

        lexer::lex(inp);
    }
}