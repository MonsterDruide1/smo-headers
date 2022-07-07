#pragma once

namespace nn { namespace g3d { 

class MaterialAnimObj
{
public:
    Initialize(nn::g3d::MaterialAnimObj::InitializeArgument const&, void*, unsigned long);
    SetResource(nn::g3d::ResMaterialAnim const*);
    Bind(nn::g3d::ResModel const*);
    SubBind(nn::g3d::ResPerMaterialAnim const*, nn::g3d::ResMaterial const*, int);
    Bind(nn::g3d::ModelObj const*);
    BindFast(nn::g3d::ResModel const*);
    SubBindFast(nn::g3d::ResPerMaterialAnim const*, int);
    Calculate();
    ApplyTo(nn::g3d::ModelObj*) const;
    ApplyTo(nn::g3d::MaterialObj*, nn::g3d::ResPerMaterialAnim const*, int) const;
    ~MaterialAnimObj();
    ClearResult();
};

} } 
