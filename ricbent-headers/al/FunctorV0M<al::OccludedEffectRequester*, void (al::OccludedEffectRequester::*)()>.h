#pragma once

namespace al { namespace FunctorV0M<al::OccludedEffectRequester*, void (al::OccludedEffectRequester::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
