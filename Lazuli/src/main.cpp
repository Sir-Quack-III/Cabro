#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Lexer.hpp"
#include "Parser.hpp"
#include "Token.hpp"

void run(std::vector<Node> inp)
{
    for (Node n : inp)
    {
        if (n.Tok.toStr() == "add")
        {
            std::cout << std::stoi(n.SubNodes[0].Tok.GetVal()) + std::stoi(n.SubNodes[1].Tok.GetVal()) << std::endl;
        }
    }
}

int main(int argc, char** argv)
{
    Lexer Lexer;
    Parser Parser;

    std::vector<Token> LexOut;
    std::vector<Node> ParseOut;

    std::ifstream inFile;
    inFile.open(argv[1]);
    std::stringstream bf;
    bf << inFile.rdbuf();

    LexOut = Lexer.Lex(bf.str());
    ParseOut = Parser.Parse(LexOut);

    run(ParseOut);
}