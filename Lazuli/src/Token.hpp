#pragma once

class Token
{
public:
    unsigned char byteVal;

    enum class TokType
    {
        cproc, // .
        cfunc, // /
        endstatement, // ;
        print, // >
        input, // <
        l_paren, // (
        r_paren, // )
        l_cbracket, // {
        r_cbracket, // }
        define, // :
        dproc, // !
        dfunc, // ~
        ret, // r
        strFormat, // $( .. )
        quot, // "
        comment, // --
        add, // +
        sub, // -
        mul, // *
        div, // /
        byte,
        word
    };

    Token(TokType tType, std::string pVal = "") : Type(tType), Val(pVal)
    {}
    TokType Type;
    std::string Val;

    TokType GetType() { return Type; }
    std::string GetVal() { return Val; }

    std::string toStr();
private:
};