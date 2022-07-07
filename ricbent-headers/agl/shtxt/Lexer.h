#pragma once

namespace agl { namespace shtxt { 

class Lexer
{
public:
    Lexer();
    ~Lexer();
    initialize(sead::Heap*, char const*, agl::shtxt::Clause*);
    setupCurrentRange(unsigned long);
    findNumberBlock() const;
    createClause(unsigned int) const;
    execute(bool);
};

} } 
