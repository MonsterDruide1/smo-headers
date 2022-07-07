#pragma once

namespace al { namespace FunctorV0M<CapRack*, void (CapRack::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
