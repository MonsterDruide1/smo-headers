#pragma once

namespace al { namespace FunctorV0M<GrowerWorm*, void (GrowerWorm::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
