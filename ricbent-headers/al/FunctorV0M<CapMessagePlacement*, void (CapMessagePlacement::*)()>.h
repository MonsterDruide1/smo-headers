#pragma once

namespace al { namespace FunctorV0M<CapMessagePlacement*, void (CapMessagePlacement::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
