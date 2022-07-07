#pragma once

namespace al { namespace FunctorV0M<DamageBallGenerator*, void (DamageBallGenerator::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
