#include <iostream>
#include <vector>

#include "Parser.hpp"
#include "Token.hpp"

std::vector<Node> Parser::Parse(std::vector<Token> Tokens)
{
    std::vector<Node> ast;

    for (int i = 0; i < Tokens.size(); i++)
    {
        if (Tokens[i].Type == Token::TokType::add)
        {
            // what the fuck
            std::vector<Node> sn{Node(Token(Token::TokType::word, Tokens[i - 1].Val)), Node(Token(Token::TokType::word, Tokens[i + 1].Val))};
            ast.push_back(Node(Token::TokType::add, sn));
        }
        else if (Tokens[i].Type == Token::TokType::sub)
        {
            // what the fuck
            std::vector<Node> sn{Node(Token(Token::TokType::word, Tokens[i - 1].Val)), Node(Token(Token::TokType::word, Tokens[i + 1].Val))};
            ast.push_back(Node(Token::TokType::sub, sn));
        }
        else if (Tokens[i].Type == Token::TokType::mul)
        {
            // what the fuck
            std::vector<Node> sn{Node(Token(Token::TokType::word, Tokens[i - 1].Val)), Node(Token(Token::TokType::word, Tokens[i + 1].Val))};
            ast.push_back(Node(Token::TokType::mul, sn));
        }
        else if (Tokens[i].Type == Token::TokType::div)
        {
            // what the fuck
            std::vector<Node> sn{Node(Token(Token::TokType::word, Tokens[i - 1].Val)), Node(Token(Token::TokType::word, Tokens[i + 1].Val))};
            ast.push_back(Node(Token::TokType::div, sn));
        }
        else
        {
        }
    }

    return ast;
}