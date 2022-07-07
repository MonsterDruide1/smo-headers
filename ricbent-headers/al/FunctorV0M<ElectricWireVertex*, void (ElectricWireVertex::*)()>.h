#pragma once

namespace al { namespace FunctorV0M<ElectricWireVertex*, void (ElectricWireVertex::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
