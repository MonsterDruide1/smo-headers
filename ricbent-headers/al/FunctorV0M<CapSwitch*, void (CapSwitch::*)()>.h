#pragma once

namespace al { namespace FunctorV0M<CapSwitch*, void (CapSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
