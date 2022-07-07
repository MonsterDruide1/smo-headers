#pragma once

namespace al { namespace FunctorV0M<GrowerBug*, void (GrowerBug::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
