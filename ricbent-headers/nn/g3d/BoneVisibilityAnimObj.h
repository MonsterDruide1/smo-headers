#pragma once

namespace nn { namespace g3d { 

class BoneVisibilityAnimObj
{
public:
    Initialize(nn::g3d::BoneVisibilityAnimObj::InitializeArgument const&, void*, unsigned long);
    SetResource(nn::g3d::ResBoneVisibilityAnim const*);
    Bind(nn::g3d::ResModel const*);
    ClearResult();
    Bind(nn::g3d::ModelObj const*);
    BindFast(nn::g3d::ResModel const*);
    Calculate();
    ApplyTo(nn::g3d::ModelObj*) const;
    ~BoneVisibilityAnimObj();
};

} } 
