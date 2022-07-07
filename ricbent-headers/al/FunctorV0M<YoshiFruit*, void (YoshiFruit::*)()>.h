#pragma once

namespace al { namespace FunctorV0M<YoshiFruit*, void (YoshiFruit::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
