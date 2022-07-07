#pragma once

namespace al { namespace FunctorV1M<DamageBallGenerator const*, void (DamageBallGenerator::*)(sead::PtrArray<al::IBgmParamsChanger>*) const, sead::PtrArray<al::IBgmParamsChanger>*> {

operator()() const;
clone() const;
~FunctorV1M();

} } 
