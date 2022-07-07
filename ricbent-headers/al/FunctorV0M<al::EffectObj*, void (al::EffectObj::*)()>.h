#pragma once

namespace al { namespace FunctorV0M<al::EffectObj*, void (al::EffectObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
