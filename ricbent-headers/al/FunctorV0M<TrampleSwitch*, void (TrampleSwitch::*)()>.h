#pragma once

namespace al { namespace FunctorV0M<TrampleSwitch*, void (TrampleSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
