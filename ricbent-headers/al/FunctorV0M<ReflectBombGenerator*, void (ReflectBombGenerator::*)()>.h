#pragma once

namespace al { namespace FunctorV0M<ReflectBombGenerator*, void (ReflectBombGenerator::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
