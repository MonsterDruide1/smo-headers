#pragma once

namespace al { namespace FunctorV0M<Stacker*, void (Stacker::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
