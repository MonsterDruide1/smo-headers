#pragma once

namespace nn { namespace ui2d { 

class Parts
{
public:
    Parts();
    Parts(nn::ui2d::ResParts const*, nn::ui2d::ResParts const*, nn::ui2d::BuildArgSet const&);
    Parts(nn::ui2d::Parts const&);
    ~Parts();
    FindPaneByNameRecursive(char const*);
    FindPaneByNameRecursive(char const*) const;
    FindMaterialByNameRecursive(char const*);
    FindMaterialByNameRecursive(char const*) const;
    CompareCopiedInstanceTest(nn::ui2d::Parts const&) const;
    GetRuntimeTypeInfo() const;
};

} } 
