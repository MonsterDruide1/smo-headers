#pragma once

namespace al { namespace FunctorV2M<DamageBallGenerator const*, void (DamageBallGenerator::*)(sead::PtrArray<al::IBgmParamsChanger>*, float*) const, sead::PtrArray<al::IBgmParamsChanger>*, float*> {

operator()() const;
clone() const;
~FunctorV2M();

} } 
