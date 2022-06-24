#include <iostream>

#include "Token.hpp"

const std::string TokStr[]
{
    "cproc", // .
    "cfunc", // /
    "endstatement", // ;
    "print", // >
    "input", // <
    "l_paren", // (
    "r_paren", // )
    "l_cbracket", // {
    "r_cbracket", // }
    "define", // :
    "dproc", // !
    "dfunc", // ~
    "ret", // r
    "strFormat", // $( .. )
    "quot", // "
    "comment", // --
    "add", // +
    "sub", // -
    "mul", // *
    "div", // /
    "byte",
    "word"
};

std::string Token::toStr()
{
    return TokStr[(int)Type];
}