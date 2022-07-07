#pragma once

namespace agl { namespace shtxt { 

class SyntaxTree
{
public:
    SyntaxTree(agl::shtxt::Clause*);
    ~SyntaxTree();
    removeClauseRecursive(sead::AnyDelegate1Const<agl::shtxt::Clause*> const*);
    checkAndGetValue() const;
    checkAndEvaluate(agl::shtxt::SyntaxTree const*) const;
    evaluate() const;
    constructRecursive(sead::Heap*, sead::Heap*) const;
    construct(sead::Heap*, sead::Heap*) const;
};

} } 
