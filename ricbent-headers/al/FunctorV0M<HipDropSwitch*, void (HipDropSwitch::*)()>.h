#pragma once

namespace al { namespace FunctorV0M<HipDropSwitch*, void (HipDropSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
