#pragma once

namespace al { namespace FunctorV0M<Rabbit*, void (Rabbit::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
