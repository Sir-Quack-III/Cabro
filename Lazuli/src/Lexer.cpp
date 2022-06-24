#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <cstdio>

#include "Token.hpp"
#include "Lexer.hpp"
#include "Mem.hpp"

const std::string DIGITS = "0123456789";
const std::string IGNORE = " \n";

std::vector<Token> Lexer::Lex(std::string pIn)
{
    std::vector<Token> Tokens;
    char cChar;
    std::string in = pIn;

    std::string KeyWrd;

    for (int idx = 0; idx < in.length(); idx++)
    {
        cChar = in[idx];
        KeyWrd.push_back(cChar);

        if (IGNORE.find(cChar) != std::string::npos) { continue; }

        // shut the fuck up you cant do switch statements on strings
        if (cChar == '+')
        {
            Tokens.push_back(Token(Token::TokType::add));
            KeyWrd = "";
        }
        else if (cChar == '-')
        {
            Tokens.push_back(Token(Token::TokType::sub));
            KeyWrd = "";
        }
        else if (cChar == '*')
        {
            Tokens.push_back(Token(Token::TokType::mul));
            KeyWrd = "";
        }
        else if (cChar == '/')
        {
            Tokens.push_back(Token(Token::TokType::div));
            KeyWrd = "";
        }
        else if (cChar == '(')
        {
            Tokens.push_back(Token(Token::TokType::l_paren));
            KeyWrd = "";
        }
        else if (cChar == ')')
        {
            Tokens.push_back(Token(Token::TokType::r_paren));
            KeyWrd = "";
        }
        else if (KeyWrd == "exit")
        {
            exit(EXIT_SUCCESS);
        }
        else if (DIGITS.find(cChar) != std::string::npos)
        {
            std::string out;
            for (; DIGITS.find(in[idx]) != std::string::npos; idx++) // makes sure next char isnt another token
            {
                cChar = in[idx];
                out.push_back(cChar);
                if (DIGITS.find(in[idx + 1]) == std::string::npos) break;
            }

            Tokens.push_back(Token(Token::TokType::word, out));
            KeyWrd = "";
        }
        else
        {
            throw "invaid char, fool";
        }
    }

    return Tokens;
}
