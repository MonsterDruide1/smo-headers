#pragma once

namespace al { namespace FunctorV0M<al::EffectSystem*, void (al::EffectSystem::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
