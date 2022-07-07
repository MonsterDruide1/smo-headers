#pragma once

namespace al { namespace FunctorV0M<SequentialSwitch*, void (SequentialSwitch::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
