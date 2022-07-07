#pragma once

namespace al { namespace FunctorV0M<Mummy*, void (Mummy::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
