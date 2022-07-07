#pragma once

namespace agl { namespace shtxt { 

class Preprocessor
{
public:
    Preprocessor(sead::Heap*, sead::Heap*);
    ~Preprocessor();
    finalize();
    initialize(char const*);
    removeClause(agl::shtxt::Clause*) const;
    removeClause(agl::shtxt::Clause*, agl::shtxt::Clause*, bool) const;
    removeClauseAll();
    removeDefineLinkerAll();
    setReplacedMacro(char const**, char const**, unsigned int);
    setDeployMacro(char const**, unsigned int);
    appendMacro(agl::shtxt::DefineLinker const*);
    preprocess(unsigned int, unsigned long, unsigned long);
    removeComment();
    forceLF();
    reduceSpace();
    reduceLF();
    format(bool);
    construct(sead::BufferedSafeStringBase<char>*) const;
    calcConstructLength() const;
};

} } 
