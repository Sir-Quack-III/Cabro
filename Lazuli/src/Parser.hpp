#pragma once

#include <iostream>
#include <vector>

#include "Token.hpp"

class Node
{
public:
    Node(Token pTok, std::vector<Node> pSubNodes = {})
    : Tok(pTok), SubNodes(pSubNodes)
    {}

    Token Tok;
    std::vector<Node> SubNodes;
private:
};

class Parser
{
public:
    std::vector<Node> Parse(std::vector<Token> Tokens);
private:
};