#pragma once

namespace al { namespace FunctorV0M<CapThrower*, void (CapThrower::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
