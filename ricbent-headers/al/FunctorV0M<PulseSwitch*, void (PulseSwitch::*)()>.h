#pragma once

namespace al { namespace FunctorV0M<PulseSwitch*, void (PulseSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
