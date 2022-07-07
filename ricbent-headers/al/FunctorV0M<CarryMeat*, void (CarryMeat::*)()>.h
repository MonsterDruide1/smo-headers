#pragma once

namespace al { namespace FunctorV0M<CarryMeat*, void (CarryMeat::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
