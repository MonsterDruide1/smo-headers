#pragma once

namespace agl { namespace shtxt { 

class Resolver
{
public:
    Resolver();
    ~Resolver();
    removeClause(agl::shtxt::Clause*) const;
    removeClause(agl::shtxt::Clause*, agl::shtxt::Clause*, bool) const;
    restructDefineStack(agl::shtxt::Resolver::DefineStackInfo*);
    removeDefineStack(agl::shtxt::Resolver::DefineStackInfo*, unsigned int);
    pushDefineStack();
    popDefineStack();
    createDefineLinker(agl::shtxt::Clause*, agl::shtxt::Clause*, bool*);
    compareMacro(agl::shtxt::Clause const*, unsigned int) const;
    calcMacroNum() const;
    compareMacro(agl::shtxt::Clause const*) const;
    replaceMacro(agl::shtxt::Clause*, agl::shtxt::DefineLinker const*, bool) const;
    resolveMacro(agl::shtxt::Clause*, bool, bool) const;
    resolveExpression(agl::shtxt::Clause*, agl::shtxt::Clause*, bool);
    resolvePreprocessExpression(bool*, bool*, agl::shtxt::Clause*, bool);
    resolvePreprocessBlock(agl::shtxt::Clause*, bool);
    markPreprocessBlock(agl::shtxt::Clause**, agl::shtxt::Clause**, agl::shtxt::Clause**, agl::shtxt::Clause*, bool);
    resolveProgramBlock(agl::shtxt::Clause*, bool*);
    resolveTernaryBlock(agl::shtxt::Clause*);
    initialize(sead::Heap*, sead::Heap*, sead::Heap*, char const*, agl::shtxt::Clause*, agl::shtxt::DefineLinker*, sead::AnyDelegate1Const<agl::shtxt::Clause*>*);
    setMacroReplaceInfo(agl::shtxt::MacroReplaceInfo const*, unsigned int);
    setMacroDeployInfo(agl::shtxt::MacroDeployInfo const*, unsigned int);
    resolveStaticBranch(agl::shtxt::Clause*, agl::shtxt::Clause*);
    executePart(agl::shtxt::Clause*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    executeImpl(agl::shtxt::Clause*, agl::shtxt::Clause*, bool);
    execute(bool, bool, bool, bool, bool, bool, bool);
};

} } 
