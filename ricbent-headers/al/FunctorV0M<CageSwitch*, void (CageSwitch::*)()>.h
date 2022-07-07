#pragma once

namespace al { namespace FunctorV0M<CageSwitch*, void (CageSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
