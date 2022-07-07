#pragma once

namespace al { namespace FunctorV0M<ElectricWire*, void (ElectricWire::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
