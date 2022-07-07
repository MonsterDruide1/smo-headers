#pragma once

namespace al { namespace FunctorV0M<Bubble*, void (Bubble::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
