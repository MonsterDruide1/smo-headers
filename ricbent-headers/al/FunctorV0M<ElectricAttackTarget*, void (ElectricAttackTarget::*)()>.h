#pragma once

namespace al { namespace FunctorV0M<ElectricAttackTarget*, void (ElectricAttackTarget::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
