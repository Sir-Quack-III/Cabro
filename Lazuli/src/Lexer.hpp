#pragma once

#include <iostream>

#include "Token.hpp"

class Lexer
{
public:
    std::vector<Token> Lex(std::string pIn);
private:
};