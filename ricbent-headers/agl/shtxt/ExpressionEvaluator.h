#pragma once

namespace agl { namespace shtxt { 

class ExpressionEvaluator
{
public:
    ExpressionEvaluator();
    ExpressionEvaluator(sead::Heap*, sead::Heap*, sead::AnyDelegate1Const<agl::shtxt::Clause*> const*);
    initialize(sead::Heap*, sead::Heap*, sead::AnyDelegate1Const<agl::shtxt::Clause*> const*);
    findSyntaxLeash(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause const*) const;
    createBinaryOperatorSyntaxTree(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*);
    createTernaryOperatorSyntaxTree(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*);
    createTokenOperatorSyntaxTree(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*);
    resolveOperatorTokenConnect(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorUnary(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorMathHigh(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorMathLow(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorShift(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorCompareHigh(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorCompareLow(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorBitOpAnd(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorBitOpXor(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorBitOpOr(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorLogicalAnd(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorLogicalOr(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorTernary(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperatorAssignment(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveOperator(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolveParenthesis(sead::ObjArray<agl::shtxt::SyntaxLeash>*, agl::shtxt::Clause*, agl::shtxt::Clause*);
    resolve(agl::shtxt::Clause*, agl::shtxt::Clause*, bool);
};

} } 
